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

    /* Clase creada para el frmReporteEquiposMedicos */
    public ref class ReporteEquipoMedico {
    private:
        String^ equipo;
        int cantidad;

    public:
        // Constructor vac�o
        ReporteEquipoMedico();

        // Constructor con par�metros
        ReporteEquipoMedico(String^ equipo, int cantidad);

        // M�todos GET
        String^ getEquipo();
        int getCantidad();

        // M�todos SET
        void setEquipo(String^ equipo);
        void setCantidad(int cantidad);
    };
}
