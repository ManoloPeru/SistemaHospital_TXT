#pragma once
#include <string>

namespace SistemaHospitalModel {
    
    using namespace System;

    public ref class Especialidad {
    private:
        int idEspecialidad;
        String^ nombre;
        String^ descripcion;

    public:
        // Constructor vac�o
        Especialidad();

        // Constructor con par�metros
        Especialidad(int idEspecialidad, String^ nombre, String^ descripcion);

        // M�todos GET
        int getIdEspecialidad();
        String^ getNombre();
        String^ getDescripcion();

        // M�todos SET
        void setIdEspecialidad(int idEspecialidad);
        void setNombre(String^ nombre);
        void setDescripcion(String^ descripcion);
    };
}
