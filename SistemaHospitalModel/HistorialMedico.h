#pragma once
#include "Tratamiento.h"

namespace SistemaHospitalModel {
    
    using namespace System;
    using namespace System::Collections::Generic; // Para usar List en C++/CLI

    public ref class HistorialMedico {
    private:
        List<Tratamiento^>^ tratamientos;

    public:
        // Constructor vac�o
        HistorialMedico();

        // Constructor con par�metros
        HistorialMedico(List<Tratamiento^>^ tratamientos);

        // M�todos GET
        List<Tratamiento^>^ getTratamientos();

        // M�todos SET
        void setTratamientos(List<Tratamiento^>^ tratamientos);
    };
}
