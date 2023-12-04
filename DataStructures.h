#ifndef DATASTRUCTURES_H
#define DATASTRUCTURES_H

#include <string>
#include <vector>
#include <iostream>
#include <C:\Users\redjh\Desktop\Universidad\Estructuras\Proyecto\nlohmann\json.hpp>

using namespace std;
using json = nlohmann::json;

struct Usuario {
    string id;
    string nombre;
    string correo;
    string password;
    vector<string> preferencias;

    Usuario() = default;

    Usuario(const json &j) {
        j.at("id").get_to(id);
        j.at("nombre").get_to(nombre);
        j.at("correo").get_to(correo);
        j.at("password").get_to(password);
        j.at("preferencias").get_to(preferencias);
    }
};

struct PeliculaSerie {
    string id;
    string titulo;
    string descripcion;
    string duracion;
    vector<string> categorias;

    PeliculaSerie() = default;

    PeliculaSerie(const json &j) {
        j.at("id").get_to(id);
        j.at("titulo").get_to(titulo);
        j.at("descripcion").get_to(descripcion);
        j.at("duracion").get_to(duracion);
        j.at("categorias").get_to(categorias);
    }
};

#endif // DATASTRUCTURES_H
