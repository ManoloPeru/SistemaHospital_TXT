#pragma once
#include <string>

namespace SistemaHospitalModel {
    
    using namespace System;

    public ref class EquipoMedico {
    private:
        int idEquipo;
        String^ nombre;
        bool disponibilidad;

    public:
        // Constructor vac�o
        EquipoMedico();

        // Constructor con par�metros
        EquipoMedico(int idEquipo, String^ nombre, bool disponibilidad);

        // M�todos GET
        int getIdEquipo();
        String^ getNombre();
        bool getDisponibilidad();

        // M�todos SET
        void setIdEquipo(int idEquipo);
        void setNombre(String^ nombre);
        void setDisponibilidad(bool disponibilidad);
    };
}
