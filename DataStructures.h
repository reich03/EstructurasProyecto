#ifndef DATASTRUCTURES_H
#define DATASTRUCTURES_H

#include <string>
#include <vector>
#include <iostream>
#include <C:\Users\redjh\Desktop\Universidad\Estructuras\Proyecto\nlohmann\json.hpp>

using namespace std;
using json = nlohmann::json;
enum RolUsuario
{
    ADMIN,
    USER
};

struct Usuario
{
    RolUsuario rol;
    string id;
    string nombre;
    string correo;
    string password;
    vector<string> preferencias;
    vector<string> categoriasInteres;

    Usuario() = default;

    Usuario(const json &j)
    {
        j.at("id").get_to(id);
        j.at("nombre").get_to(nombre);
        j.at("correo").get_to(correo);
        j.at("password").get_to(password);
        j.at("preferencias").get_to(preferencias);
        j.at("categoriasInteres").get_to(categoriasInteres);
         string rolStr = j.value("rol", "USER"); 
        rol = (rolStr == "ADMIN") ? ADMIN : USER;
    }
};

struct PeliculaSerie
{
    string id;
    string titulo;
    string descripcion;
    string duracion;
    vector<string> categorias;
    vector<string> actores;
    float calificacion;
    int numCalificaciones;

    PeliculaSerie() : calificacion(0.0), numCalificaciones(0) {}

    PeliculaSerie(const json &j)
    {
        j.at("id").get_to(id);
        j.at("titulo").get_to(titulo);
        j.at("descripcion").get_to(descripcion);
        j.at("duracion").get_to(duracion);
        j.at("categorias").get_to(categorias);
        j.at("actores").get_to(actores);
        if (j.find("calificacion") != j.end())
        {
            j.at("calificacion").get_to(calificacion);
        }
        else
        {
            calificacion = 0.0;
        }
        if (j.find("numCalificaciones") != j.end())
        {
            j.at("numCalificaciones").get_to(numCalificaciones);
        }
        else
        {
            numCalificaciones = 0;
        }
    }
};

#endif // DATASTRUCTURES_H
