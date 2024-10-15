#pragma once
#include "EquipoMedico.h"

namespace SistemaHospitalModel {
    
    using namespace System;
    using namespace System::Collections::Generic; // Para usar List en C++/CLI

    public ref class Procedimiento {
    private:
        int idProcedimiento;
        String^ nombre;
        String^ tipo;
        List<EquipoMedico^>^ equiposRequeridos;

    public:
        // Constructor vac�o
        Procedimiento();

        // Constructor con par�metros
        Procedimiento(int idProcedimiento, String^ nombre, String^ tipo, List<EquipoMedico^>^ equiposRequeridos);

        // M�todos GET
        int getIdProcedimiento();
        String^ getNombre();
        String^ getTipo();
        List<EquipoMedico^>^ getEquiposRequeridos();

        // M�todos SET
        void setIdProcedimiento(int idProcedimiento);
        void setNombre(String^ nombre);
        void setTipo(String^ tipo);
        void setEquiposRequeridos(List<EquipoMedico^>^ equiposRequeridos);
    };
}
