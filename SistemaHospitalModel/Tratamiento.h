#pragma once
#include "Procedimiento.h"

namespace SistemaHospitalModel {

    using namespace System;
    using namespace System::Collections::Generic; // Para usar List en C++/CLI

    public ref class Tratamiento {
    private:
        int idTratamiento;
        int idMedicoAsignado; // Referencia al ID M�dico asignado
        List<Procedimiento^>^ procedimientos; // Lista de Procedimientos
        String^ estado;

    public:
        // Constructor vac�o
        Tratamiento();

        // Constructor con par�metros
        Tratamiento(int idTratamiento, int idMedicoAsignado, List<Procedimiento^>^ procedimientos, String^ estado);

        // M�todos GET
        int getIdTratamiento();
        int getidMedicoAsignado();
        List<Procedimiento^>^ getProcedimientos();
        String^ getEstado();

        // M�todos SET
        void setIdTratamiento(int idTratamiento);
        void setidMedicoAsignado(int idMedicoAsignado);
        void setProcedimientos(List<Procedimiento^>^ procedimientos);
        void setEstado(String^ estado);
    };
}
