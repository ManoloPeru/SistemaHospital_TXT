#include "EquipoMedico.h"

namespace SistemaHospitalModel {

    // Constructor vac�o
    EquipoMedico::EquipoMedico() {
        this->idEquipo = 0;
        this->nombre = "";
        this->disponibilidad = true;
    }

    // Constructor con par�metros
    EquipoMedico::EquipoMedico(int idEquipo, String^ nombre, bool disponibilidad) {
        this->idEquipo = idEquipo;
        this->nombre = nombre;
        this->disponibilidad = disponibilidad;
    }

    // M�todos GET
    int EquipoMedico::getIdEquipo() {
        return this->idEquipo;
    }

    String^ EquipoMedico::getNombre() {
        return this->nombre;
    }

    bool EquipoMedico::getDisponibilidad() {
        return this->disponibilidad;
    }

    // M�todos SET
    void EquipoMedico::setIdEquipo(int idEquipo) {
        this->idEquipo = idEquipo;
    }

    void EquipoMedico::setNombre(String^ nombre) {
        this->nombre = nombre;
    }

    void EquipoMedico::setDisponibilidad(bool disponibilidad) {
        this->disponibilidad = disponibilidad;
    }
}
