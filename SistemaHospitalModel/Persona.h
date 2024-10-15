#pragma once

namespace SistemaHospitalModel {
    using namespace System; // Para tipos como String

    // Declaracion de la clase Persona
    public ref class Persona {
    protected:
        int idPersona;
        String^ nombre;
        int edad;
        String^ genero;
        String^ direccion;
        String^ telefono;
        String^ email;
        String^ estadoCivil;
        float altura;

    public:
        // Constructor vacío
        Persona();

        // Constructor con todos los parámetros
        Persona(int idPersona, String^ nombre, int edad, String^ genero, String^ direccion, String^ telefono, String^ email, String^ estadoCivil, float altura);

        // Metodos GET
        int getIdPersona();
        String^ getNombre();
        int getEdad();
        String^ getGenero();
        String^ getDireccion();
        String^ getTelefono();
        String^ getEmail();
        String^ getEstadoCivil();
        float getAltura();

        // Metodos SET
        void setIdPersona(int id);
        void setNombre(String^ nombre);
        void setEdad(int edad);
        void setGenero(String^ genero);
        void setDireccion(String^ direccion);
        void setTelefono(String^ telefono);
        void setEmail(String^ email);
        void setEstadoCivil(String^ estadoCivil);
        void setAltura(float altura);
    };
}

