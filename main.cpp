#include <iostream>
#include <fstream>
#include "Graph.cpp"
#include "DataStructures.h"
#include <cstdlib>
#include <set>
#include <map>
#include <string>
#include <vector>
#include <limits>
#include <sstream>
#include <thread>
#include <chrono>

using namespace std;

enum Categoria
{
    ACCION,
    COMEDIA,
    DRAMA,
    TERROR,
    CIENCIA_FICCION,
    DOCUMENTAL,
    ANIMACION,
    BELICA,
    CRIMEN,
    ROMANCE,
    AVENTURA,
    THRILLER,
    FANTASIA,
    BIOGRAFIA,
    MUSICAL,
    MISTERIO
};

string categoriaToString(Categoria categoria)
{
    switch (categoria)
    {
    case ACCION:
        return "Accion";
    case COMEDIA:
        return "Comedia";
    case DRAMA:
        return "Drama";
    case TERROR:
        return "Terror";
    case CIENCIA_FICCION:
        return "Sci-fi";
    case DOCUMENTAL:
        return "Documental";
    case ANIMACION:
        return "Animacion";
    case BELICA:
        return "Belica";
    case CRIMEN:
        return "Crimen";
    case ROMANCE:
        return "Romance";
    case AVENTURA:
        return "Aventura";
    case THRILLER:
        return "Thriller";
    case FANTASIA:
        return "Fantasia";
    case BIOGRAFIA:
        return "Biografia";
    case MUSICAL:
        return "Musical";
    case MISTERIO:
        return "Misterio";
    }
    return "";
}

Categoria obtenerCategoriaPorIndice(int indice)
{
    switch (indice)
    {
    case 1:
        return ACCION;
    case 2:
        return COMEDIA;
    case 3:
        return DRAMA;
    case 4:
        return TERROR;
    case 5:
        return CIENCIA_FICCION;
    case 6:
        return DOCUMENTAL;
    case 7:
        return ANIMACION;
    case 8:
        return BELICA;
    case 9:
        return CRIMEN;
    case 10:
        return ROMANCE;
    case 11:
        return AVENTURA;
    case 12:
        return THRILLER;
    case 13:
        return FANTASIA;
    case 14:
        return BIOGRAFIA;
    case 15:
        return MUSICAL;
    case 16:
        return MISTERIO;
    default:
        return ACCION;
    }
}

void mostrarCategorias()
{
    cout << "Categorias disponibles:" << endl;
    cout << "1. Accion" << endl;
    cout << "2. Comedia" << endl;
    cout << "3. Drama" << endl;
    cout << "4. Terror" << endl;
    cout << "5. Sci-fi" << endl;
    cout << "6. Documental" << endl;
    cout << "7. Animacion" << endl;
    cout << "8. Belica" << endl;
    cout << "9. Crimen" << endl;
    cout << "10. Romance" << endl;
    cout << "11. Aventura" << endl;
    cout << "12. Thriller" << endl;
    cout << "13. Fantasia" << endl;
    cout << "14. Biografia" << endl;
    cout << "15. Musical" << endl;
    cout << "16. Misterio" << endl;
}

/* Mover data en json a graph y al contrario*/

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
        j.at("categoriasInteres").get_to(user.categoriasInteres);
        string rolStr = j.value("rol", "USER");
        user.rol = (rolStr == "ADMIN") ? ADMIN : USER;

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
        PeliculaSerie pelicula;
        pelicula.id = j.at("id").get<string>();
        pelicula.titulo = j.at("titulo").get<string>();
        pelicula.descripcion = j.at("descripcion").get<string>();
        pelicula.duracion = j.at("duracion").get<string>();
        j.at("categorias").get_to(pelicula.categorias);

        if (j.find("actores") != j.end())
        {
            j.at("actores").get_to(pelicula.actores);
        }

        if (j.find("calificacion") != j.end())
        {
            pelicula.calificacion = j.at("calificacion").get<float>();
        }
        else
        {
            pelicula.calificacion = 0.0;
        }

        if (j.find("numCalificaciones") != j.end())
        {
            pelicula.numCalificaciones = j.at("numCalificaciones").get<int>();
        }
        else
        {
            pelicula.numCalificaciones = 0;
        }

        movieGraph.addVertex(pelicula);
    }
}

void guardarUsuariosEnJSON(const Graph<Usuario> &userGraph, const string &archivo)
{
    json jsonUsuarios = json::array();
    for (int i = 0; i < userGraph.vertexList.size(); i++)
    {
        Usuario user = userGraph.vertexList.get(i)->data;
        json jUser;
        jUser["id"] = user.id;
        jUser["nombre"] = user.nombre;
        jUser["correo"] = user.correo;
        jUser["password"] = user.password;
        jUser["preferencias"] = user.preferencias;
        jUser["categoriasInteres"] = user.categoriasInteres;
        jUser["rol"] = (user.rol == ADMIN) ? "ADMIN" : "USER";

        jsonUsuarios.push_back(jUser);
    }
    std::ofstream file(archivo);
    file << jsonUsuarios.dump(4);
}

void guardarPeliculasEnJSON(const Graph<PeliculaSerie> &movieGraph, const string &archivo)
{
    json jsonPeliculas = json::array();
    for (int i = 0; i < movieGraph.vertexList.size(); i++)
    {
        PeliculaSerie pelicula = movieGraph.vertexList.get(i)->data;
        json jPelicula;
        jPelicula["id"] = pelicula.id;
        jPelicula["titulo"] = pelicula.titulo;
        jPelicula["descripcion"] = pelicula.descripcion;
        jPelicula["duracion"] = pelicula.duracion;
        jPelicula["categorias"] = pelicula.categorias;
        jPelicula["actores"] = pelicula.actores;
        jPelicula["calificacion"] = pelicula.calificacion;
        jPelicula["numCalificaciones"] = pelicula.numCalificaciones;

        jsonPeliculas.push_back(jPelicula);
    }
    std::ofstream file(archivo);
    file << jsonPeliculas.dump(4);
}

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

void limpiarPantalla()
{
#ifdef WINDOWS
    std::system("cls");
#else
    std::system("clear");
#endif
}

void mostrarAnimacionCarga()
{
    for (int i = 0; i < 10; ++i)
    {
        std::cout << ".";
        std::this_thread::sleep_for(std::chrono::milliseconds(500)); // Espera medio segundo
    }
    std::cout << std::endl;
}

/*Funciones auxiliares o de uso secundario de funciones principales*/

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

bool esCorreoUnico(const Graph<Usuario> &userGraph, const string &correo, const string &userIdExcluido)
{
    for (int i = 0; i < userGraph.vertexList.size(); i++)
    {
        const Usuario &user = userGraph.vertexList.get(i)->data;
        if (user.correo == correo && user.id != userIdExcluido)
        {
            return false;
        }
    }
    return true;
}

/*Funciones peliculas*/
void mostrarPeliculas(const Graph<PeliculaSerie> &movieGraph)
{
    cout << "Peliculas disponibles:" << endl;
    for (int i = 0; i < movieGraph.vertexList.size(); i++)
    {
        PeliculaSerie pelicula = movieGraph.vertexList.get(i)->data;
        cout << "ID: " << pelicula.id << " - " << pelicula.titulo << endl;
    }
}

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

void recomendarPorCategoria(const Graph<PeliculaSerie> &movieGraph, const vector<string> &categoriasPreferidas)
{
    cout << "Recomendaciones basadas en tus categorias preferidas:" << endl;
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

void imprimirGrafoPeliculas(const Graph<PeliculaSerie> &movieGraph)
{
    cout << "Grafo de Peliculas/Series:" << endl;
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
    return ""; // Retorna una cadena vacia si no se encuentra el usuario
}

void elegirCategoriasDeInteres(vector<string> &categoriasPreferidas)
{
    int numCategorias;
    cout << "¿Cuántas categorias te interesan? ";
    cin >> numCategorias;

    categoriasPreferidas.clear();
    for (int i = 0; i < numCategorias; i++)
    {
        string categoria;
        cout << "Ingresa la categoria " << i + 1 << ": ";
        cin >> categoria;
        categoriasPreferidas.push_back(categoria);
    }
}

void mostrarCategoriasDisponibles()
{
    cout << "Categorias disponibles:" << endl;
    for (int i = ACCION; i <= MISTERIO; i++)
    {
        cout << i + 1 << ". " << categoriaToString(static_cast<Categoria>(i)) << endl;
    }
}

void actualizarInformacionUsuario(Graph<Usuario> &userGraph, const string &userId)
{
    Vertex<Usuario> *userVertex = userGraph.getVertexById(userId);
    if (!userVertex)
    {
        cout << "Usuario no encontrado." << endl;
        return;
    }

    Usuario &user = userVertex->data;
    cout << "Actualizar información para " << user.nombre << ":" << endl;
    cout << "Nuevo nombre (deja en blanco para mantener el actual): ";
    string nuevoNombre;
    getline(cin >> ws, nuevoNombre);
    if (!nuevoNombre.empty())
        user.nombre = nuevoNombre;
    string nuevoCorreo;
    do
    {
        cout << "Nuevo correo electrónico (deja en blanco para mantener el actual): ";
        getline(cin >> ws, nuevoCorreo);
        if (!nuevoCorreo.empty() && !esCorreoUnico(userGraph, nuevoCorreo, user.id))
        {
            cout << "Este correo ya está en uso. Intenta con otro." << endl;
        }
    } while (!nuevoCorreo.empty() && !esCorreoUnico(userGraph, nuevoCorreo, user.id));
    if (!nuevoCorreo.empty())
        user.correo = nuevoCorreo;
    cout << "Nueva contraseña (deja en blanco para mantener la actual): ";
    string nuevaPassword;
    getline(cin >> ws, nuevaPassword);
    if (!nuevaPassword.empty())
        user.password = nuevaPassword;
    int actualizarCategorias;
    cout << "¿Deseas actualizar tus categorias de interés? (1 = si, 0 = no): ";
    cin >> actualizarCategorias;
    if (actualizarCategorias)
    {
        cout << "Tus categorias de interés actuales son: " << endl;
        for (const auto &categoria : user.categoriasInteres)
        {
            cout << " - " << categoria << endl;
        }

        mostrarCategoriasDisponibles();
        cout << "Ingresa los números de las categorias que deseas agregar (0 para terminar): ";
        int indiceCategoria;
        while (true)
        {
            cin >> indiceCategoria;
            if (indiceCategoria == 0)
                break;
            Categoria categoria = obtenerCategoriaPorIndice(indiceCategoria);
            string strCategoria = categoriaToString(categoria);
            if (find(user.categoriasInteres.begin(), user.categoriasInteres.end(), strCategoria) == user.categoriasInteres.end())
            {
                user.categoriasInteres.push_back(strCategoria);
            }
        }

        cout << "¿Deseas eliminar alguna categoria? (1 = si, 0 = no): ";
        int eliminarCategoria;
        cin >> eliminarCategoria;
        if (eliminarCategoria)
        {
            cout << "Ingresa los números de las categorias que deseas eliminar (0 para terminar): ";
            while (true)
            {
                cin >> indiceCategoria;
                if (indiceCategoria == 0)
                    break;
                Categoria categoria = obtenerCategoriaPorIndice(indiceCategoria);
                string strCategoria = categoriaToString(categoria);
                auto it = find(user.categoriasInteres.begin(), user.categoriasInteres.end(), strCategoria);
                if (it != user.categoriasInteres.end())
                {
                    user.categoriasInteres.erase(it);
                }
            }
        }
    }
}

void agregarPeliculaAPreferencias(Graph<Usuario> &userGraph, const string &userId, const string &movieId)
{
    Vertex<Usuario> *userVertex = userGraph.getVertexById(userId);
    if (userVertex)
    {
        if (find(userVertex->data.preferencias.begin(), userVertex->data.preferencias.end(), movieId) == userVertex->data.preferencias.end())
        {
            userVertex->data.preferencias.push_back(movieId);
            cout << "Pelicula agregada a tus preferencias." << endl;
        }
        else
        {
            cout << "Esta pelicula ya está en tus preferencias." << endl;
        }
    }
}

void enlazarNuevaPelicula(Graph<PeliculaSerie> &movieGraph, PeliculaSerie &nuevaPelicula)
{
    for (int i = 0; i < movieGraph.vertexList.size(); i++)
    {
        PeliculaSerie &peliculaExistente = movieGraph.vertexList.get(i)->data;
        if (nuevaPelicula.id != peliculaExistente.id && compartenCategoria(nuevaPelicula, peliculaExistente))
        {
            movieGraph.addCategoryEdge(nuevaPelicula.id, peliculaExistente.id);
        }
    }
}

vector<string> split(const string &s, char delimiter)
{
    vector<std::string> tokens;
    string token;
    stringstream tokenStream(s);

    while (getline(tokenStream, token, delimiter))
    {
        tokens.push_back(token);
    }

    return tokens;
}
void agregarPelicula(Graph<PeliculaSerie> &movieGraph)
{
    PeliculaSerie nuevaPelicula;
    cout << "Agregar nueva pelicula" << endl;
    cout << "Ingrese el titulo: ";
    getline(cin >> ws, nuevaPelicula.titulo);
    cout << "Ingrese la descripción: ";
    getline(cin, nuevaPelicula.descripcion);
    cout << "Ingrese la duración: ";
    getline(cin, nuevaPelicula.duracion);

    string categoriasInput, actoresInput;
    cout << "Ingrese las categorias (separadas por comas): ";
    getline(cin, categoriasInput);
    nuevaPelicula.categorias = split(categoriasInput, ',');

    cout << "Ingrese los actores (separados por comas): ";
    getline(cin, actoresInput);
    nuevaPelicula.actores = split(actoresInput, ',');

    nuevaPelicula.id = "movie " + to_string(movieGraph.vertexList.size() + 1);
    nuevaPelicula.calificacion = 0.0;
    nuevaPelicula.numCalificaciones = 0;

    movieGraph.addVertex(nuevaPelicula);
    enlazarNuevaPelicula(movieGraph, nuevaPelicula);
    cout << "Pelicula agregada exitosamente." << endl;
}

void eliminarPelicula(Graph<PeliculaSerie> &movieGraph)
{
    mostrarPeliculas(movieGraph);

    string idPelicula;
    cout << "\nIngrese el ID de la pelicula a eliminar: ";
    cin >> ws;
    getline(cin, idPelicula);
    cout << "id ingresado: " << idPelicula << endl;
    Vertex<PeliculaSerie> *vertex = movieGraph.getVertexById(idPelicula);
    if (vertex == nullptr)
    {
        cout << "No se encontro la pelicula con el ID proporcionado." << endl;
        return;
    }

    if (movieGraph.removeVertex(idPelicula))
    {
        cout << "Pelicula eliminada exitosamente." << endl;
    }
    else
    {
        cout << "No se pudo eliminar la pelicula." << endl;
    }
}

set<string> obtenerActoresFavoritos(Graph<Usuario> &userGraph, const string &userId, Graph<PeliculaSerie> &movieGraph)
{
    Vertex<Usuario> *userVertex = userGraph.getVertexById(userId);
    set<string> actoresFavoritos;

    if (userVertex)
    {
        for (const auto &movieId : userVertex->data.preferencias)
        {
            Vertex<PeliculaSerie> *movieVertex = movieGraph.getVertexById(movieId);
            if (movieVertex)
            {
                actoresFavoritos.insert(movieVertex->data.actores.begin(), movieVertex->data.actores.end());
            }
        }
    }

    return actoresFavoritos;
}

void mostrarPeliculasRecomendadas(Graph<Usuario> &userGraph, Graph<PeliculaSerie> &movieGraph, const string &userId)
{
    Vertex<Usuario> *userVertex = userGraph.getVertexById(userId);
    if (!userVertex)
    {
        cout << "Usuario no encontrado." << endl;
        return;
    }

    const vector<string> &categoriasPreferidas = userVertex->data.categoriasInteres;
    set<string> actoresFavoritos = obtenerActoresFavoritos(userGraph, userId, movieGraph);

    cout << "Recomendaciones basadas en tus categorias y actores preferidos:" << endl;
    for (int i = 0; i < movieGraph.vertexList.size(); i++)
    {
        PeliculaSerie pelicula = movieGraph.vertexList.get(i)->data;

        bool coincideCategoria = any_of(categoriasPreferidas.begin(), categoriasPreferidas.end(), [&](const string &categoria)
                                        { return find(pelicula.categorias.begin(), pelicula.categorias.end(), categoria) != pelicula.categorias.end(); });

        bool coincideActor = actoresFavoritos.empty() || any_of(pelicula.actores.begin(), pelicula.actores.end(), [&](const string &actor)
                                                                { return actoresFavoritos.find(actor) != actoresFavoritos.end(); });

        if (coincideCategoria && (coincideActor || pelicula.actores.empty()) && (pelicula.calificacion >= 4.0 || pelicula.numCalificaciones == 0))
        {

            cout << " - " << pelicula.titulo << " (ID: " << pelicula.id << ")" << endl;
            cout << " " << pelicula.descripcion << " Con la duracion de: " << pelicula.duracion << endl;
            cout << " Actores: ";
            for (const auto &actor : pelicula.actores)
            {
                cout << actor << ", ";
            }
            cout << endl;
            cout << " Con la calificacion de: " << pelicula.calificacion << endl;

            cout << "¿Deseas agregar esta pelicula a tus preferencias? (s/n): ";
            char respuesta;
            cin >> respuesta;
            if (respuesta == 's' || respuesta == 'S')
            {
                agregarPeliculaAPreferencias(userGraph, userId, pelicula.id);
            }
            cout << "¿Deseas ver mas recomendaciones? (s/n): ";
            char respuestaContinuar;
            cin >> respuestaContinuar;
            if (respuestaContinuar == 'n' || respuestaContinuar == 'N')
            {
                break;
            }
        }
    }
}

void calificarPelicula(Graph<PeliculaSerie> &movieGraph, const string &movieId, float calificacionUsuario)
{
    Vertex<PeliculaSerie> *movieVertex = movieGraph.getVertexById(movieId);
    if (movieVertex)
    {
        PeliculaSerie &pelicula = movieVertex->data;
        pelicula.calificacion = (pelicula.calificacion * pelicula.numCalificaciones + calificacionUsuario) / (pelicula.numCalificaciones + 1);
        pelicula.numCalificaciones++;
    }
}

void calificarPeliculaPreferida(Graph<Usuario> &userGraph, Graph<PeliculaSerie> &movieGraph, const string &userId)
{
    Vertex<Usuario> *userVertex = userGraph.getVertexById(userId);
    if (!userVertex)
    {
        cout << "Usuario no encontrado." << endl;
        return;
    }

    cout << "Selecciona una pelicula de tus preferencias para calificar:" << endl;
    int i = 1;
    map<int, string> peliculaMap;
    for (const auto &movieId : userVertex->data.preferencias)
    {
        Vertex<PeliculaSerie> *movieVertex = movieGraph.getVertexById(movieId);
        if (movieVertex)
        {
            cout << i << ". " << movieVertex->data.titulo << endl;
            peliculaMap[i++] = movieId;
        }
    }

    int seleccion;
    cin >> seleccion;
    if (peliculaMap.find(seleccion) != peliculaMap.end())
    {
        cout << "Ingresa tu calificación (0.0 a 5.0): ";
        float calificacion;
        cin >> calificacion;
        calificarPelicula(movieGraph, peliculaMap[seleccion], calificacion);
    }
    else
    {
        cout << "Selección inválida." << endl;
    }
}

void crearNuevoUsuario(Graph<Usuario> &userGraph, RolUsuario rolPorDefecto, bool esAdmin)
{
    Usuario newUser;
    cout << "Crear nuevo usuario" << endl;
    cout << "Ingrese su nombre: ";
    getline(cin >> ws, newUser.nombre);
    cout << "Ingrese su correo electronico: ";
    getline(cin, newUser.correo);
    cout << "Ingrese su contraseña: ";
    getline(cin, newUser.password);
    newUser.id = "user" + to_string(userGraph.vertexList.size() + 1);
    newUser.preferencias = vector<string>();

    if (esAdmin)
    {
        cout << "Seleccione el rol para el nuevo usuario (1 para ADMIN, 2 para USER): ";
        int rolSeleccionado;
        cin >> rolSeleccionado;
        newUser.rol = (rolSeleccionado == 1) ? ADMIN : USER;
    }
    else
    {
        newUser.rol = rolPorDefecto;
    }

    if (!esAdmin)
    {
        mostrarCategorias();
        cout << "¿Cuantas categorias te interesan? ";
        int numCategorias;
        cin >> numCategorias;

        newUser.categoriasInteres.clear();
        for (int i = 0; i < numCategorias; i++)
        {
            int indiceCategoria;
            cout << "Ingresa el número de la categoria " << i + 1 << ": ";
            cin >> indiceCategoria;
            Categoria categoria = obtenerCategoriaPorIndice(indiceCategoria);
            newUser.categoriasInteres.push_back(categoriaToString(categoria));
        }
    }

    userGraph.addVertex(newUser);
    cout << "Usuario creado exitosamente. Su ID es: " << newUser.id << endl;
}

/* Menus Programa*/
void mostrarMenu(RolUsuario rolUsuario)
{
    cout << "\033[1;32m==== Menú de Usuario ====\033[0m\n";
    cout << "1. Ver mis preferencias" << endl;
    cout << "2. Calificar peliculas de mi interes" << endl;
    cout << "3. Mostrar peliculas recomendadas" << endl;
    cout << "4. Actualizar mi informacion" << endl;
    if (rolUsuario == ADMIN)
    {
        cout << "5. Agregar/Borrar peliculas" << endl;
        cout << "6. Crear nuevo usuario" << endl;
    }
    cout << "7. Salir" << endl;
    cout << "\033[1;36mElige una opción: \033[0m";
}

void menuPrincipal()
{

    cout << "============================================\n";
    cout << "               Menú Principal               \n";
    cout << "============================================\n";
    cout << "\033[1;32mBienvenido al Sistema de Recomendacion de Peliculas\033[0m\n";

    cout << "1. Iniciar sesion" << endl;
    cout << "2. Crear nuevo usuario" << endl;
    cout << "3. Salir" << endl;
    cout << "Elige una opcion: ";
}

void administrarPeliculas(Graph<Usuario> &userGraph, Graph<PeliculaSerie> &movieGraph)
{
    cout << "Administracion de Peliculas" << endl;
    cout << "1. Agregar nueva pelicula" << endl;
    cout << "2. Eliminar pelicula existente" << endl;
    cout << "3. Mostrar todas las peliculas" << endl;
    cout << "4. Regresar al menu principal" << endl;
    cout << "Elige una opción: ";

    int opcionAdmin;
    cin >> opcionAdmin;

    switch (opcionAdmin)
    {
    case 1:
        agregarPelicula(movieGraph);
        guardarPeliculasEnJSON(movieGraph, "C:/Users/redjh/Desktop/Universidad/Estructuras/Proyecto/Data/Movies/Series.json");
        break;
    case 2:
        eliminarPelicula(movieGraph);
        guardarPeliculasEnJSON(movieGraph, "C:/Users/redjh/Desktop/Universidad/Estructuras/Proyecto/Data/Movies/Series.json");
        break;
    case 3:
        mostrarPeliculas(movieGraph);
        break;
    case 4:
        // Regresar al menú principal
        break;
    default:
        cout << "Opcion no valida." << endl;
    }
}

void menuUsuario(Graph<Usuario> &userGraph, Graph<PeliculaSerie> &movieGraph, const string &userId)
{
    Vertex<Usuario> *userVertex = userGraph.getVertexById(userId);
    if (!userVertex)
    {
        cout << "Usuario no encontrado." << endl;
        return;
    }

    Usuario &user = userVertex->data;
    int opcion = 0;
    do
    {
        mostrarMenu(user.rol);
        cin >> opcion;

        if (cin.fail())
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Entrada inválida. Por favor, ingresa un número." << endl;
            continue;
        }

        switch (opcion)
        {
        case 1:
            encontrarPreferenciasDeUsuario(userGraph, movieGraph, userId);
            break;
        case 2:
            calificarPeliculaPreferida(userGraph, movieGraph, userId);
            guardarPeliculasEnJSON(movieGraph, "C:/Users/redjh/Desktop/Universidad/Estructuras/Proyecto/Data/Movies/Series.json");
            break;
        case 3:
            cout << "Buscando películas recomendadas";
            for (int i = 0; i < 3; ++i)
            {
                cout << ".";
                this_thread::sleep_for(chrono::milliseconds(500));
            }
            cout << endl;
            mostrarPeliculasRecomendadas(userGraph, movieGraph, userId);
            guardarUsuariosEnJSON(userGraph, "C:/Users/redjh/Desktop/Universidad/Estructuras/Proyecto/Data/Users.json");
            break;
        case 4:
            actualizarInformacionUsuario(userGraph, userId);
            guardarUsuariosEnJSON(userGraph, "C:/Users/redjh/Desktop/Universidad/Estructuras/Proyecto/Data/Users.json");
            break;
        case 5:
            if (user.rol == ADMIN)
            {
                administrarPeliculas(userGraph, movieGraph);
                break;
            case 6:
                if (user.rol == ADMIN)
                {
                    crearNuevoUsuario(userGraph, ADMIN, true);
                    guardarUsuariosEnJSON(userGraph, "C:/Users/redjh/Desktop/Universidad/Estructuras/Proyecto/Data/Users.json");
                }
                break;
            case 7:
                cout << "Saliendo del programa." << endl;
                break;
            default:
                cout << "Opción no valida." << endl;
            }
        }
    } while (opcion != 7);
}

int main()
{
    Graph<Usuario> userGraph;
    Graph<PeliculaSerie> movieGraph;
    vector<string> categoriasPreferidas;
    string correo, password, userId;

    // Crear y añadir usuarios
    // Cargar datos desde archivos JSON

    cout << "Inicializando sistema";
    for (int i = 0; i < 5; ++i)
    {
        cout << ".";
        this_thread::sleep_for(chrono::milliseconds(500));
    }
    cout << endl;

    cargarUsuariosDesdeJSON(userGraph, "C:/Users/redjh/Desktop/Universidad/Estructuras/Proyecto/Data/Users.json");
    cargarPeliculasDesdeJSON(movieGraph, "C:/Users/redjh/Desktop/Universidad/Estructuras/Proyecto/Data/Movies/Series.json");
    enlazarPeliculasPorCategoria(movieGraph);

    int opcionPrincipal;

    do
    {
        // limpiarPantalla();
        menuPrincipal();
        cin >> opcionPrincipal;

        if (opcionPrincipal == 1)
        {
            cout << "Correo electronico: ";
            cin >> correo;
            cout << "Contraseña: ";
            cin >> password;

            cout << "Verificando credenciales";
            for (int i = 0; i < 3; ++i)
            {
                cout << ".";
                this_thread::sleep_for(chrono::milliseconds(500));
            }
            cout << endl;

            userId = verificarUsuario(userGraph, correo, password);
            if (userId.empty())
            {
                cout << "Usuario no encontrado o contraseña incorrecta." << endl;
            }
            else
            {
                menuUsuario(userGraph, movieGraph, userId);
            }
        }
        else if (opcionPrincipal == 2)
        {
            bool esAdmin = false;
            if (!userId.empty())
            {
                Vertex<Usuario> *currentUserVertex = userGraph.getVertexById(userId);
                if (currentUserVertex && currentUserVertex->data.rol == ADMIN)
                {
                    esAdmin = true;
                }
            }
            crearNuevoUsuario(userGraph, USER, esAdmin);
            guardarUsuariosEnJSON(userGraph, "C:/Users/redjh/Desktop/Universidad/Estructuras/Proyecto/Data/Users.json");
            userId = "";
        }

    } while (opcionPrincipal != 3);

    cout << "\033[1;33mGracias por usar nuestro sistema. ¡Hasta la proxima!\033[0m\n";

    return 0;
}
