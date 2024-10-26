#include "PacienteController.h"

using namespace SistemaHospitalController;
using namespace System::IO; //Para leer archivos

PacienteController::PacienteController() {

}

// Método para listar Pacientes
List<Paciente^>^ PacienteController::listarPacientes() {
    List<Paciente^>^ listaPacientes = gcnew List<Paciente^>();
    array<String^>^ lineasArchivo = File::ReadAllLines("Pacientes.txt");
    String^ separadores = ";";
    String^ separadorLista = ",";
    for each (String ^ linea in lineasArchivo) {
        /*Voy a separar los datos de una linea en un arreglo de string*/
        array<String^>^ datos = linea->Split(separadores->ToCharArray());
        //Clase Persona
        int idPersona = Convert::ToInt32(datos[0]);
        String^ nombre = datos[1];
        int edad = Convert::ToInt32(datos[2]);
        String^ genero = datos[3];
        String^ direccion = datos[4];
        String^ telefono = datos[5];
        String^ email = datos[6];
        String^ estadoCivil = datos[7];
        float altura = Convert::ToSingle(datos[8]);
        //Clase Paciente
        int idPaciente = Convert::ToInt32(datos[9]);
        String^ numeroSeguroSocial = datos[10];
        String^ grupoSanguíneo = datos[11];
        List<String^>^ alergias = gcnew List<String^>();
        alergias->Add(datos[12]);
        String^ contactoEmergencia = datos[13];
        List<String^>^ diagnosticos = gcnew List<String^>();
        diagnosticos->Add(datos[14]);
               
        // Crear objeto Paciente y añadir a la lista
        Paciente^ paciente = gcnew Paciente();
        // Asignar propiedades de Persona
        paciente->setIdPersona(idPersona);
        paciente->setNombre(nombre);
        paciente->setEdad(edad);
        paciente->setGenero(genero);
        paciente->setDireccion(direccion);
        paciente->setTelefono(telefono);
        paciente->setEmail(email);
        paciente->setEstadoCivil(estadoCivil);
        paciente->setAltura(altura);
        // Asignar propiedades de Paciente
        paciente->setIdPaciente(idPaciente);
        paciente->setNumeroSeguroSocial(numeroSeguroSocial);
        paciente->setGrupoSanguíneo(grupoSanguíneo);
        paciente->setAlergias(alergias);
        paciente->setContactoEmergencia(contactoEmergencia);
        paciente->setDiagnosticos(diagnosticos);

        listaPacientes->Add(paciente);
    }
    return listaPacientes;
}

// Método para buscar pacientes por IdPaciente
Paciente^ PacienteController::buscarPacienteById(int idPaciente) {
    List<Paciente^>^ listaPacientes = listarPacientes();
    Paciente^ pacienteEncontrado = gcnew Paciente();
    for each (Paciente ^ paciente in listaPacientes) {
        if (paciente->getIdPaciente() == idPaciente) {
            // Verificar por ID de médico
            pacienteEncontrado->setIdPersona(paciente->getIdPersona());
            pacienteEncontrado->setNombre(paciente->getNombre());
            pacienteEncontrado->setEdad(paciente->getEdad());
            pacienteEncontrado->setGenero(paciente->getGenero());
            pacienteEncontrado->setDireccion(paciente->getDireccion());
            pacienteEncontrado->setTelefono(paciente->getTelefono());
            pacienteEncontrado->setEmail(paciente->getEmail());
            pacienteEncontrado->setEstadoCivil(paciente->getEstadoCivil());
            pacienteEncontrado->setAltura(paciente->getAltura());
            pacienteEncontrado->setIdPaciente(paciente->getIdPaciente());
            pacienteEncontrado->setNumeroSeguroSocial(paciente->getNumeroSeguroSocial());
            pacienteEncontrado->setGrupoSanguíneo(paciente->getGrupoSanguíneo());
            pacienteEncontrado->setAlergias(paciente->getAlergias());
            pacienteEncontrado->setContactoEmergencia(paciente->getContactoEmergencia());
            pacienteEncontrado->setDiagnosticos(paciente->getDiagnosticos());
            break;
        }
    }
    return pacienteEncontrado;
}