#pragma once
#include "Paciente.h"
#include "Medico.h"
#include "Tratamiento.h"

namespace SistemaHospitalModel {
    
    using namespace System;

    public ref class CitaMedica {
    private:
        int idCita;
        Paciente^ paciente; // Referencia a un objeto Paciente
        Medico^ medico;     // Referencia a un objeto Medico
        DateTime fecha;
        TimeSpan hora;
        String^ proposito;
        String^ resultado;
        Tratamiento^ tratamientoProgramado; // Referencia a un objeto Tratamiento

    public:
        // Constructor vac�o
        CitaMedica();

        // Constructor con par�metros: 
        CitaMedica(int idCita, Paciente^ paciente, Medico^ medico, DateTime fecha, TimeSpan hora, String^ proposito, String^ resultado, Tratamiento^ tratamientoProgramado);

        // M�todos GET
        int getIdCita();
        Paciente^ getPaciente();
        Medico^ getMedico();
        DateTime getFecha();
        TimeSpan getHora();
        String^ getProposito();
        String^ getResultado();
        Tratamiento^ getTratamientoProgramado();

        // M�todos SET
        void setIdCita(int idCita);
        void setPaciente(Paciente^ paciente);
        void setMedico(Medico^ medico);
        void setFecha(DateTime fecha);
        void setHora(TimeSpan hora);
        void setProposito(String^ proposito);
        void setResultado(String^ resultado);
        void setTratamientoProgramado(Tratamiento^ tratamientoProgramado);
    };
}
