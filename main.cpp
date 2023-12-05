#include <iostream>
#include <fstream>
#include "Graph.cpp"
#include "DataStructures.h"
#include <cstdlib>
#include <set>
#include <map>

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
    AVENTURA,
    BELICA,
    ROMANCE,
    CRIMEN,
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
        return "Acción";
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
        return "Bélica";
    case CRIMEN:
        return "Crimen";
    case ROMANCE:
        return "Romance";
    case AVENTURA:
        return "Aventura";
    case THRILLER:
        return "Thriller";
    case FANTASIA:
        return "Fantasía";
    case BIOGRAFIA:
        return "Biografia";
    case MUSICAL:
        return "Musical";
    case MISTERIO:
        return "Misterio";
    }
    return "";
}
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

void limpiarPantalla()
{
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}

// bool que me compara entre las peliculas para definir si tienen una categoria comun entre estas
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

void recomendarPorCategoria(const Graph<PeliculaSerie> &movieGraph, const vector<string> &categoriasPreferidas)
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

/*Funcion para al momento de loguearse definir que user es y si es retorne su id, para manejarlo y poder usarlo en la aplicacion*/

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

// definir categorias de interes y escribirlas
void elegirCategoriasDeInteres(vector<string> &categoriasPreferidas)
{
    int numCategorias;
    cout << "¿Cuántas categorías te interesan? ";
    cin >> numCategorias;

    categoriasPreferidas.clear();
    for (int i = 0; i < numCategorias; i++)
    {
        string categoria;
        cout << "Ingresa la categoría " << i + 1 << ": ";
        cin >> categoria;
        categoriasPreferidas.push_back(categoria);
    }
}

// Funcion para definir si el correo ingresado no esta repetido
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

void mostrarCategoriasDisponibles()
{
    cout << "Categorías disponibles:" << endl;
    for (int i = ACCION; i <= MISTERIO; i++)
    {
        cout << i + 1 << ". " << categoriaToString(static_cast<Categoria>(i)) << endl;
    }
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

// Actualizar informacion del usuario
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
    cout << "¿Deseas actualizar tus categorías de interés? (1 = sí, 0 = no): ";
    cin >> actualizarCategorias;
    if (actualizarCategorias)
    {
        cout << "Tus categorías de interés actuales son: " << endl;
        for (const auto &categoria : user.categoriasInteres)
        {
            cout << " - " << categoria << endl;
        }

        mostrarCategoriasDisponibles();
        cout << "Ingresa los números de las categorías que deseas agregar (0 para terminar): ";
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

        cout << "¿Deseas eliminar alguna categoría? (1 = sí, 0 = no): ";
        int eliminarCategoria;
        cin >> eliminarCategoria;
        if (eliminarCategoria)
        {
            cout << "Ingresa los números de las categorías que deseas eliminar (0 para terminar): ";
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
            cout << "Película agregada a tus preferencias." << endl;
        }
        else
        {
            cout << "Esta película ya está en tus preferencias." << endl;
        }
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
// Funcion para poder mostrar peliculas recomendadas una por una en base a tus gustos de categorias y si te gustan guardarlas en tus preferencias
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

    cout << "Recomendaciones basadas en tus categorías y actores preferidos:" << endl;
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
            cout << "¿Deseas agregar esta película a tus preferencias? (s/n): ";
            char respuesta;
            cin >> respuesta;
            if (respuesta == 's' || respuesta == 'S')
            {
                agregarPeliculaAPreferencias(userGraph, userId, pelicula.id);
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

    cout << "Selecciona una película de tus preferencias para calificar:" << endl;
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

// Funcion para pushear los datos que tenga de mi user en el grafo hacia el objeto del json
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

void mostrarCategorias()
{
    cout << "Categorías disponibles:" << endl;
    cout << "1. Acción" << endl;
    cout << "2. Comedia" << endl;
    cout << "3. Drama" << endl;
    cout << "4. Terror" << endl;
    cout << "5. Sci-fi" << endl;
    cout << "6. Documental" << endl;
    cout << "7. Animacion" << endl;
    cout << "8. Bélica" << endl;
    cout << "9. Crimen" << endl;
    cout << "10. Romance" << endl;
    cout << "11. Aventura" << endl;
    cout << "12. Thriller" << endl;
    cout << "13. Fantasía" << endl;
    cout << "14. Biografia" << endl;
    cout << "15. Musical" << endl;
    cout << "16. Misterio" << endl;
}

void crearNuevoUsuario(Graph<Usuario> &userGraph, RolUsuario rolUsuarioCreando)
{
    Usuario newUser;
    cout << "Crear nuevo usuario" << endl;
    cout << "Ingrese su nombre: ";
    cin >> newUser.nombre;
    cout << "Ingrese su correo electrónico: ";
    cin >> newUser.correo;
    cout << "Ingrese su contraseña: ";
    cin >> newUser.password;
    newUser.id = "user" + to_string(userGraph.vertexList.size() + 1);
    newUser.preferencias = vector<string>();

    if (rolUsuarioCreando == ADMIN)
    {
        cout << "Seleccione el rol para el nuevo usuario (1 para ADMIN, 2 para USER): ";
        int rolSeleccionado;
        cin >> rolSeleccionado;
        newUser.rol = (rolSeleccionado == 1) ? ADMIN : USER;
    }
    else
    {
        newUser.rol = USER;
    }

    if (newUser.rol == USER)
    {
        mostrarCategorias();
        cout << "¿Cuántas categorías te interesan? ";
        int numCategorias;
        cin >> numCategorias;

        newUser.categoriasInteres.clear();
        for (int i = 0; i < numCategorias; i++)
        {
            int indiceCategoria;
            cout << "Ingresa el número de la categoría " << i + 1 << ": ";
            cin >> indiceCategoria;
            Categoria categoria = obtenerCategoriaPorIndice(indiceCategoria);
            newUser.categoriasInteres.push_back(categoriaToString(categoria));
        }
    }

    userGraph.addVertex(newUser);
    cout << "Usuario creado exitosamente. Su ID es: " << newUser.id << endl;
}

void mostrarMenu(RolUsuario rol)
{
    cout << "1. Ver mis preferencias" << endl;
    cout << "2. Calificar películas de mi interés" << endl;
    cout << "3. Mostrar películas recomendadas" << endl;
    cout << "4. Actualizar mi información" << endl;
    if (rol == ADMIN)
    {
        cout << "6. Administrar películas" << endl;
        cout << "7. Agregar usuario" << endl;
    }
    cout << "5. Salir" << endl;
    cout << "Elige una opción: ";
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

            break;
        case 3:
            mostrarPeliculasRecomendadas(userGraph, movieGraph, userId);
            guardarUsuariosEnJSON(userGraph, "C:/Users/redjh/Desktop/Universidad/Estructuras/Proyecto/Data/Users.json");
            break;
        case 4:
            actualizarInformacionUsuario(userGraph, userId);
            guardarUsuariosEnJSON(userGraph, "C:/Users/redjh/Desktop/Universidad/Estructuras/Proyecto/Data/Users.json");
            break;
        case 5:
            cout << "Saliendo del programa." << endl;
            break;
        case 6:
            if (user.rol == ADMIN)
            {
                // Llamar función para administrar películas
            }
            break;
        case 7:
            if (user.rol == ADMIN)
            {
                // Llamar función para agregar usuarios
            }
        default:
            cout << "Opción no válida." << endl;
        }
    } while (opcion != 5);
}

void menuPrincipal()
{
    cout << "1. Iniciar sesión" << endl;
    cout << "2. Crear nuevo usuario" << endl;
    cout << "3. Salir" << endl;
    cout << "Elige una opción: ";
}
int main()
{
    Graph<Usuario> userGraph;
    Graph<PeliculaSerie> movieGraph;
    vector<string> categoriasPreferidas;
    string correo, password, userId;

    // Crear y añadir usuarios
    // Cargar datos desde archivos JSON
    cargarUsuariosDesdeJSON(userGraph, "C:/Users/redjh/Desktop/Universidad/Estructuras/Proyecto/Data/Users.json");
    cargarPeliculasDesdeJSON(movieGraph, "C:/Users/redjh/Desktop/Universidad/Estructuras/Proyecto/Data/Movies/Series.json");
    enlazarPeliculasPorCategoria(movieGraph);

    int opcionPrincipal;

    do
    {
        limpiarPantalla();
        menuPrincipal();
        cin >> opcionPrincipal;

        if (opcionPrincipal == 1)
        {
            cout << "Correo electrónico: ";
            cin >> correo;
            cout << "Contraseña: ";
            cin >> password;

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
        else if (opcionPrincipal == 2 && !userId.empty())
        {
            Vertex<Usuario> *currentUserVertex = userGraph.getVertexById(userId);
            if (currentUserVertex && currentUserVertex->data.rol == ADMIN)
            {
                crearNuevoUsuario(userGraph, currentUserVertex->data.rol);
                guardarUsuariosEnJSON(userGraph, "C:/Users/redjh/Desktop/Universidad/Estructuras/Proyecto/Data/Users.json");
            }
            else
            {
                cout << "No tienes permisos para crear un nuevo usuario." << endl;
            }
        }

    } while (opcionPrincipal != 3);

    cout << "Gracias por usar el programa." << endl;

    return 0;
}
