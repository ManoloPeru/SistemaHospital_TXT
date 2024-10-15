#pragma once
#include "Paciente.h"

namespace SistemaHospitalModel {

    // Constructor vac�o
    Paciente::Paciente() : Persona() {
        this->idPaciente = 0;
        this->numeroSeguroSocial = "";
        this->grupoSangu�neo = "";
        this->alergias = gcnew List<String^>();
        this->historialMedico = gcnew HistorialMedico();
        this->contactoEmergencia = "";
        this->diagnosticos = gcnew List<String^>();
    }

    // Constructor con par�metros
    Paciente::Paciente(int idPaciente, String^ numeroSeguroSocial, String^ grupoSangu�neo, List<String^>^ alergias, HistorialMedico^ historialMedico, String^ contactoEmergencia, List<String^>^ diagnosticos) : Persona (idPersona, nombre, edad, genero, direccion, telefono, email, estadoCivil, altura)  {
        this->idPaciente = idPaciente;
        this->numeroSeguroSocial = numeroSeguroSocial;
        this->grupoSangu�neo = grupoSangu�neo;
        this->alergias = alergias;
        this->historialMedico = historialMedico;
        this->contactoEmergencia = contactoEmergencia;
        this->diagnosticos = diagnosticos;
    }

    // M�todos GET
    int Paciente::getIdPaciente() {
        return this->idPaciente;
    }

    String^ Paciente::getNumeroSeguroSocial() {
        return this->numeroSeguroSocial;
    }

    String^ Paciente::getGrupoSangu�neo() {
        return this->grupoSangu�neo;
    }

    List<String^>^ Paciente::getAlergias() {
        return this->alergias;
    }
    
    HistorialMedico^ Paciente::getHistorialMedico() {
        return this->historialMedico;
    }
    
    String^ Paciente::getContactoEmergencia() {
        return this->contactoEmergencia;
    }

    List<String^>^ Paciente::getDiagnosticos() {
        return this->diagnosticos;
    }

    // M�todos SET
    void Paciente::setIdPaciente(int idPaciente) {
        this->idPaciente = idPaciente;
    }

    void Paciente::setNumeroSeguroSocial(String^ numeroSeguroSocial) {
        this->numeroSeguroSocial = numeroSeguroSocial;
    }

    void Paciente::setGrupoSangu�neo(String^ grupoSangu�neo) {
        this->grupoSangu�neo = grupoSangu�neo;
    }

    void Paciente::setAlergias(List<String^>^ alergias) {
        this->alergias = alergias;
    }
    
    void Paciente::setHistorialMedico(HistorialMedico^ historialMedico) {
        this->historialMedico = historialMedico;
    }
    
    void Paciente::setContactoEmergencia(String^ contactoEmergencia) {
        this->contactoEmergencia = contactoEmergencia;
    }

    void Paciente::setDiagnosticos(List<String^>^ diagnosticos) {
        this->diagnosticos = diagnosticos;
    }
}
