#pragma once
#include "Persona.h"

namespace SistemaHospitalModel {

    // Constructor vacío
    Persona::Persona() {
        this->idPersona = 0;
        this->nombre = "";
        this->edad = 0;
        this->genero = "";
        this->direccion = "";
        this->telefono = "";
        this->email = "";
        this->estadoCivil = "";
        this->altura = 0.0f;
    }

    // Constructor con parámetros
    Persona::Persona(int idPersona, String^ nombre, int edad, String^ genero, String^ direccion, String^ telefono, String^ email, String^ estadoCivil, float altura) {
        this->idPersona = idPersona;
        this->nombre = nombre;
        this->edad = edad;
        this->genero = genero;
        this->direccion = direccion;
        this->telefono = telefono;
        this->email = email;
        this->estadoCivil = estadoCivil;
        this->altura = altura;
    }

    // Metodos GET
    int Persona::getIdPersona() {
        return this->idPersona;
    }

    String^ Persona::getNombre() {
        return this->nombre;
    }

    int Persona::getEdad() {
        return this->edad;
    }

    String^ Persona::getGenero() {
        return this->genero;
    }

    String^ Persona::getDireccion() {
        return this->direccion;
    }

    String^ Persona::getTelefono() {
        return this->telefono;
    }

    String^ Persona::getEmail() {
        return this->email;
    }

    String^ Persona::getEstadoCivil() {
        return this->estadoCivil;
    }

    float Persona::getAltura() {
        return this->altura;
    }

    // Metodos SET
    void Persona::setIdPersona(int id) {
        this->idPersona = id;
    }

    void Persona::setNombre(String^ nombre) {
        this->nombre = nombre;
    }

    void Persona::setEdad(int edad) {
        this->edad = edad;
    }

    void Persona::setGenero(String^ genero) {
        this->genero = genero;
    }

    void Persona::setDireccion(String^ direccion) {
        this->direccion = direccion;
    }

    void Persona::setTelefono(String^ telefono) {
        this->telefono = telefono;
    }

    void Persona::setEmail(String^ email) {
        this->email = email;
    }

    void Persona::setEstadoCivil(String^ estadoCivil) {
        this->estadoCivil = estadoCivil;
    }

    void Persona::setAltura(float altura) {
        this->altura = altura;
    }
}
