#include <iostream>
#include <fstream>
#include "Graph.cpp"
#include "DataStructures.h"
using namespace std;

// cargar data del json al constructor de los struct
void cargarUsuariosDesdeJSON(Graph<Usuario> &userGraph, const string &archivo)
{
    std::ifstream file(archivo);
    json jsonUsuarios;
    file >> jsonUsuarios;

    for (const auto &j : jsonUsuarios)
    {
        Usuario user;
        user.id = j.at("id").get<string>();
        user.nombre = j.at("nombre").get<string>();
        user.correo = j.at("correo").get<string>();
        user.password = j.at("password").get<string>();
        j.at("preferencias").get_to(user.preferencias);
        userGraph.addVertex(user);
    }
}
void cargarPeliculasDesdeJSON(Graph<PeliculaSerie> &movieGraph, const string &archivo)
{
    std::ifstream file(archivo);
    json jsonPeliculas;
    file >> jsonPeliculas;

    for (const auto &j : jsonPeliculas)
    {
        PeliculaSerie peliculas;
        peliculas.id = j.at("id").get<string>();
        peliculas.titulo = j.at("titulo").get<string>();
        peliculas.descripcion = j.at("descripcion").get<string>();
        peliculas.duracion = j.at("duracion").get<string>();
        j.at("categorias").get_to(peliculas.categorias);

        movieGraph.addVertex(peliculas);
    }
}

// Funcion que valida el user y posterior a ello coje la list de preferencias del usuario para mostrarlos
void encontrarPreferenciasDeUsuario(Graph<Usuario> &userGraph, Graph<PeliculaSerie> &movieGraph, const string &userId)
{
    Vertex<Usuario> *userVertex = userGraph.getVertexById(userId);
    if (!userVertex)
    {
        cout << "Usuario no encontrado." << endl;
        return;
    }

    Usuario user = userVertex->data;
    cout << "Preferencias de " << user.nombre << ":" << endl;

    for (const auto &movieId : user.preferencias)
    {
        Vertex<PeliculaSerie> *movieVertex = movieGraph.getVertexById(movieId);
        if (movieVertex)
        {
            cout << " - " << movieVertex->data.titulo << endl;
        }
    }
}

bool compartenCategoria(const PeliculaSerie &pelicula1, const PeliculaSerie &pelicula2)
{
    for (const auto &categoria1 : pelicula1.categorias)
    {
        for (const auto &categoria2 : pelicula2.categorias)
        {
            if (categoria1 == categoria2)
            {
                return true;
            }
        }
    }
    return false;
}

// coje las peliculas para posterior añadir las aristas de enlazamiento usando la funcion de arriba para validad si las tienen en comun

void enlazarPeliculasPorCategoria(Graph<PeliculaSerie> &movieGraph)
{
    for (int i = 0; i < movieGraph.vertexList.size(); i++)
    {
        for (int j = i + 1; j < movieGraph.vertexList.size(); j++)
        {
            PeliculaSerie &pelicula1 = movieGraph.vertexList.get(i)->data;
            PeliculaSerie &pelicula2 = movieGraph.vertexList.get(j)->data;

            if (compartenCategoria(pelicula1, pelicula2))
            {
                movieGraph.addCategoryEdge(pelicula1.id, pelicula2.id);
            }
        }
    }
}

// funcion recoje las categorias que usuario comento son de su preferencia para luego validar que peliculas estan enlazadas a esta y asi poder mostrarle recomendaciones en base a estas

void recomendarPorCategoria(Graph<PeliculaSerie> &movieGraph, const vector<string> &categoriasPreferidas)
{
    cout << "Recomendaciones basadas en tus categorías preferidas:" << endl;
    for (int i = 0; i < movieGraph.vertexList.size(); i++)
    {
        PeliculaSerie &pelicula = movieGraph.vertexList.get(i)->data;
        for (const auto &categoria : pelicula.categorias)
        {
            if (find(categoriasPreferidas.begin(), categoriasPreferidas.end(), categoria) != categoriasPreferidas.end())
            {
                cout << " - " << pelicula.titulo << endl;
                break;
            }
        }
    }
}

// imprimir todas las peliculas
void imprimirGrafoPeliculas(const Graph<PeliculaSerie> &movieGraph)
{
    cout << "Grafo de Películas/Series:" << endl;
    for (int i = 0; i < movieGraph.vertexList.size(); i++)
    {
        auto peliculaVertex = movieGraph.vertexList.get(i);
        const PeliculaSerie &pelicula = peliculaVertex->data;

        cout << "Pelicula/Serie: " << pelicula.titulo << " (" << pelicula.id << ")" << endl;
        cout << "Conectada con:" << endl;

        for (int j = 0; j < peliculaVertex->connectedTo.size(); j++)
        {
            auto edge = peliculaVertex->connectedTo.get(j);
            cout << " - " << edge->to->data.titulo << " (" << edge->to->data.id << ")" << endl;
        }
        cout << endl;
    }
}

string verificarUsuario(const Graph<Usuario> &userGraph, const string &correo, const string &password)
{
    for (int i = 0; i < userGraph.vertexList.size(); i++)
    {
        Usuario &user = userGraph.vertexList.get(i)->data;
        if (user.correo == correo && user.password == password)
        {
            return user.id; // Retorna el ID del usuario si las credenciales coinciden
        }
    }
    return ""; // Retorna una cadena vacía si no se encuentra el usuario
}

void mostrarMenu()
{
    cout << "1. Ver mis preferencias" << endl;
    cout << "2. Elegir categorías de interés" << endl;
    cout << "3. Mostrar películas recomendadas" << endl;
    cout << "4. Actualizar mi información" << endl;
    cout << "5. Salir" << endl;
    cout << "Elige una opción: ";
}
int main()
{

    Graph<Usuario> userGraph;
    Graph<PeliculaSerie> movieGraph;
    // Crear y añadir usuarios
    // Cargar datos desde archivos JSON
    cargarUsuariosDesdeJSON(userGraph, "C:/Users/redjh/Desktop/Universidad/Estructuras/Proyecto/Data/Users.json");
    cargarPeliculasDesdeJSON(movieGraph, "C:/Users/redjh/Desktop/Universidad/Estructuras/Proyecto/Data/Movies/Series.json");
    enlazarPeliculasPorCategoria(movieGraph);
    string correo, password;
    cout << "Correo electrónico: ";
    cin >> correo;
    cout << "Contraseña: ";
    cin >> password;

    // Verificar usuario
    string userId = verificarUsuario(userGraph, correo, password);
    if (userId.empty())
    {
        cout << "Usuario no encontrado o contraseña incorrecta." << endl;
        return 0;
    }

    int opcion;
    do
    {
        mostrarMenu();
        cin >> opcion;

        switch (opcion)
        {
        case 1:
            encontrarPreferenciasDeUsuario(userGraph, movieGraph, userId);
            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
            break;
        case 5:
            cout << "Saliendo del programa." << endl;
            break;
        default:
            cout << "Opción no válida." << endl;
        }
    } while (opcion != 5);
    return 0;
}
