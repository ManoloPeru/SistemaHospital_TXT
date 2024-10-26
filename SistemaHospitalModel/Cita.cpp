#include "Cita.h"

namespace SistemaHospitalModel {

    // Constructor vac�o
    Cita::Cita() {
        this->idCita = 0;
        this->paciente = gcnew Paciente();
        this->medico = gcnew Medico();
        this->fecha = DateTime::Now.Year * 10000 + DateTime::Now.Month * 100 + DateTime::Now.Day; // Asigna la fecha en formato YYYYMMDD
        this->hora = DateTime::Now.ToString("HH:mm");;// Asigna la hora en formato HH:MM
        this->proposito = "";
        this->resultado = "";
        this->tratamientoProgramado = gcnew Tratamiento();
    }

    //// Constructor con par�metros: 
    Cita::Cita(int idCita, Paciente^ paciente, Medico^ medico, int fecha, String^ hora, String^ proposito, String^ resultado, Tratamiento^ tratamientoProgramado) {
        this->idCita = idCita;
        this->paciente = paciente;
        this->medico = medico;
        this->fecha = fecha;
        this->hora = hora;
        this->proposito = proposito;
        this->resultado = resultado;
        this->tratamientoProgramado = tratamientoProgramado;
    }

    // M�todos GET
    int Cita::getIdCita() {
        return this->idCita;
    }

    Paciente^ Cita::getPaciente() {
        return this->paciente;
    }

    Medico^ Cita::getMedico() {
        return this->medico;
    }

    int Cita::getFecha() {
        return this->fecha;
    }

    String^ Cita::getHora() {
        return this->hora;
    }

    String^ Cita::getProposito() {
        return this->proposito;
    }

    String^ Cita::getResultado() {
        return this->resultado;
    }

    Tratamiento^ Cita::getTratamientoProgramado() {
        return this->tratamientoProgramado;
    }

    // M�todos SET
    void Cita::setIdCita(int idCita) {
        this->idCita = idCita;
    }

    void Cita::setPaciente(Paciente^ paciente) {
        this->paciente = paciente;
    }

    void Cita::setMedico(Medico^ medico) {
        this->medico = medico;
    }

    void Cita::setFecha(int fecha) {
        this->fecha = fecha;
    }

    void Cita::setHora(String^ hora) {
        this->hora = hora;
    }

    void Cita::setProposito(String^ proposito) {
        this->proposito = proposito;
    }

    void Cita::setResultado(String^ resultado) {
        this->resultado = resultado;
    }

    void Cita::setTratamientoProgramado(Tratamiento^ tratamientoProgramado) {
        this->tratamientoProgramado = tratamientoProgramado;
    }
}
