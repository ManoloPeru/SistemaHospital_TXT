#include "Especialidad.h"

namespace SistemaHospitalModel {

    // Constructor vac�o
    Especialidad::Especialidad() {
        this->idEspecialidad = 0;
        this->nombre = "";
        this->descripcion = "";
    }

    // Constructor con par�metros
    Especialidad::Especialidad(int idEspecialidad, String^ nombre, String^ descripcion) {
        this->idEspecialidad = idEspecialidad;
        this->nombre = nombre;
        this->descripcion = descripcion;
    }

    // M�todos GET
    int Especialidad::getIdEspecialidad() {
        return this->idEspecialidad;
    }

    String^ Especialidad::getNombre() {
        return this->nombre;
    }

    String^ Especialidad::getDescripcion() {
        return this->descripcion;
    }

    // M�todos SET
    void Especialidad::setIdEspecialidad(int idEspecialidad) {
        this->idEspecialidad = idEspecialidad;
    }

    void Especialidad::setNombre(String^ nombre) {
        this->nombre = nombre;
    }

    void Especialidad::setDescripcion(String^ descripcion) {
        this->descripcion = descripcion;
    }
}
