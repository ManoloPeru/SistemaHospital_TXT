#include "Procedimiento.h"

namespace SistemaHospitalModel {

    // Constructor vac�o
    Procedimiento::Procedimiento() {
        this->idProcedimiento = 0;
        this->nombre = "";
        this->tipo = "";
        this->equiposRequeridos = gcnew List<EquipoMedico^>();
    }

    // Constructor con par�metros
    Procedimiento::Procedimiento(int idProcedimiento, String^ nombre, String^ tipo, List<EquipoMedico^>^ equiposRequeridos) {
        this->idProcedimiento = idProcedimiento;
        this->nombre = nombre;
        this->tipo = tipo;
        this->equiposRequeridos = equiposRequeridos;
    }

    // M�todos GET
    int Procedimiento::getIdProcedimiento() {
        return this->idProcedimiento;
    }

    String^ Procedimiento::getNombre() {
        return this->nombre;
    }

    String^ Procedimiento::getTipo() {
        return this->tipo;
    }

    List<EquipoMedico^>^ Procedimiento::getEquiposRequeridos() {
        return this->equiposRequeridos;
    }

    // M�todos SET
    void Procedimiento::setIdProcedimiento(int idProcedimiento) {
        this->idProcedimiento = idProcedimiento;
    }

    void Procedimiento::setNombre(String^ nombre) {
        this->nombre = nombre;
    }

    void Procedimiento::setTipo(String^ tipo) {
        this->tipo = tipo;
    }

    void Procedimiento::setEquiposRequeridos(List<EquipoMedico^>^ equiposRequeridos) {
        this->equiposRequeridos = equiposRequeridos;
    }
}
