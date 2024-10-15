#pragma once
#include "Persona.h"
#include "HistorialMedico.h"

namespace SistemaHospitalModel {

    using namespace System;
    using namespace System::Collections::Generic; // Para usar List en C++/CLI

    public ref class Paciente : public Persona {
    private:
        int idPaciente;
        String^ numeroSeguroSocial;
        String^ grupoSangu�neo;
        List<String^>^ alergias;
        HistorialMedico^ historialMedico; // Referencia a la clase HistorialMedico
        String^ contactoEmergencia;
        List<String^>^ diagnosticos;

    public:
        // Constructor vac�o
        Paciente();

        // Constructor con par�metros
        Paciente(int idPaciente, String^ numeroSeguroSocial, String^ grupoSangu�neo, List<String^>^ alergias, HistorialMedico^ historialMedico, String^ contactoEmergencia, List<String^>^ diagnosticos);

        // M�todos GET
        int getIdPaciente();
        String^ getNumeroSeguroSocial();
        String^ getGrupoSangu�neo();
        List<String^>^ getAlergias();
        HistorialMedico^ getHistorialMedico();
        String^ getContactoEmergencia();
        List<String^>^ getDiagnosticos();

        // M�todos SET
        void setIdPaciente(int idPaciente);
        void setNumeroSeguroSocial(String^ numeroSeguroSocial);
        void setGrupoSangu�neo(String^ grupoSangu�neo);
        void setAlergias(List<String^>^ alergias);
        void setHistorialMedico(HistorialMedico^ historialMedico);
        void setContactoEmergencia(String^ contactoEmergencia);
        void setDiagnosticos(List<String^>^ diagnosticos);
    };
}
