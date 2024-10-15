#include "HistorialMedico.h"

namespace SistemaHospitalModel {

    // Constructor vac�o
    HistorialMedico::HistorialMedico() {
        this->tratamientos = gcnew List<Tratamiento^>();
    }

    // Constructor con par�metros
    HistorialMedico::HistorialMedico(List<Tratamiento^>^ tratamientos) {
        this->tratamientos = tratamientos;
    }

    // M�todos GET
    List<Tratamiento^>^ HistorialMedico::getTratamientos() {
        return this->tratamientos;
    }

    // M�todos SET
    void HistorialMedico::setTratamientos(List<Tratamiento^>^ tratamientos) {
        this->tratamientos = tratamientos;
    }
}
