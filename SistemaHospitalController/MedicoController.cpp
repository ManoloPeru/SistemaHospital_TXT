#include "MedicoController.h"
#include "EspecialidadController.h"

using namespace SistemaHospitalController;
using namespace System::IO; //Para leer archivos

MedicoController::MedicoController() {

}

// Método para listar médicos
List<Medico^>^ MedicoController::listarMedicos() {
    List<Medico^>^ listaMedicos = gcnew List<Medico^>();
    array<String^>^ lineasArchivo = File::ReadAllLines("Medicos.txt");
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
        //Clase Médico
        int idMedico = Convert::ToInt32(datos[9]);
        String^ numeroColegioMedico = datos[10];
        
        //Lista de Certificados
        List<String^>^ certificaciones = gcnew List<String^>();
        array<String^>^ listaCertificados = datos[11]->Split(separadorLista->ToCharArray());
        for each (String ^ certificado in listaCertificados) {
            certificaciones->Add(certificado);
        }
        
        List<Especialidad^>^ especialidades = gcnew List<Especialidad^>();
        array<String^>^ listaIds = datos[12]->Split(separadorLista->ToCharArray());
        for each (String ^ id in listaIds) {
            if (!id->Equals(""))
            {
                EspecialidadController^ objEspecialidad = gcnew EspecialidadController();
                especialidades->Add(objEspecialidad->buscarEspecialidadById(Convert::ToInt32(id)));
            }
        }

        List<int>^ idCitasAsignadas = gcnew List<int>();
        List<Paciente^>^ pacientesAsociados = gcnew List<Paciente^>();
        
        // Crear objeto Medico y añadir a la lista
        Medico^ medico = gcnew Medico();
        // Asignar propiedades de Persona
        medico->setIdPersona(idPersona);
        medico->setNombre(nombre);
        medico->setEdad(edad);
        medico->setGenero(genero);
        medico->setDireccion(direccion);
        medico->setTelefono(telefono);
        medico->setEmail(email);
        medico->setEstadoCivil(estadoCivil);
        medico->setAltura(altura);
        // Asignar propiedades de Medico
        medico->setIdMedico(idMedico);
        medico->setNumeroColegioMedico(numeroColegioMedico);
        medico->setCertificaciones(certificaciones);
        medico->setEspecialidades(especialidades);
        medico->setidCitasAsignadas(idCitasAsignadas);
        medico->setPacientesAsociados(pacientesAsociados);

        listaMedicos->Add(medico);
    }
    return listaMedicos;
}

// Método para agregar médico
void MedicoController::agregarMedico(int idPersona, String^ nombre, int edad, String^ genero, String^ direccion, String^ telefono, String^ email, String^ estadoCivil, float altura, int idMedico, String^ numeroColegioMedico, List<String^>^ certificaciones, List<Especialidad^>^ especialidades, List<int>^ idCitasAsignadas, List<Paciente^>^ pacientesAsociados) {
    List<Medico^>^ listaMedicos = listarMedicos();
    // Crear objeto Medico
    Medico^ medico = gcnew Medico();
    // Asignar propiedades de Persona
    medico->setIdPersona(idPersona);
    medico->setNombre(nombre);
    medico->setEdad(edad);
    medico->setGenero(genero);
    medico->setDireccion(direccion);
    medico->setTelefono(telefono);
    medico->setEmail(email);
    medico->setEstadoCivil(estadoCivil);
    medico->setAltura(altura);
    // Asignar propiedades de Medico
    medico->setIdMedico(idMedico);
    medico->setNumeroColegioMedico(numeroColegioMedico);
    medico->setCertificaciones(certificaciones);
    medico->setEspecialidades(especialidades);
    medico->setidCitasAsignadas(idCitasAsignadas);
    medico->setPacientesAsociados(pacientesAsociados);

    listaMedicos->Add(medico);
    escribirArchivo(listaMedicos);
}

// Método para escribir médicos en archivo
void MedicoController::escribirArchivo(List<Medico^>^ listaMedicos) {
    array<String^>^ lineasArchivo = gcnew array<String^>(listaMedicos->Count);
    for (int i = 0; i < listaMedicos->Count; i++) {
        Medico^ medico = listaMedicos[i];

        // Serializar certificaciones
        String^ certificaciones = String::Join(",", medico->getCertificaciones()->ToArray());

        // Serializar sólo los IDs de especialidad
        List<String^>^ idsEspecialidades = gcnew List<String^>();
        for each (Especialidad ^ especialidad in medico->getEspecialidades()) {
            idsEspecialidades->Add(especialidad->getIdEspecialidad().ToString());
        }
        String^ especialidades = String::Join(",", idsEspecialidades->ToArray());

        // Serializar idCitasAsignadas
        String^ idCitas = ""; //String::Join(",", medico->getidCitasAsignadas()->ToArray());

        // Serializar pacientes asociados
        String^ pacientesAsociados = ""; //String::Join(",", medico->getPacientesAsociados()->ToArray());


        lineasArchivo[i] = medico->getIdPersona() + ";" +
            medico->getNombre() + ";" +
            medico->getEdad() + ";" +
            medico->getGenero() + ";" +
            medico->getDireccion() + ";" +
            medico->getTelefono() + ";" +
            medico->getEmail() + ";" +
            medico->getEstadoCivil() + ";" +
            medico->getAltura() + ";" +
            medico->getIdMedico() + ";" +
            medico->getNumeroColegioMedico() + ";" +
            certificaciones + ";" +
            especialidades + ";" +
            idCitas + ";" +
            pacientesAsociados;
    }
    File::WriteAllLines("Medicos.txt", lineasArchivo);
}

// Método para modificar médico
void MedicoController::modificarMedico(int idPersona, String^ nombre, int edad, String^ genero, String^ direccion, String^ telefono, String^ email, String^ estadoCivil, float altura, int idMedico, String^ numeroColegioMedico, List<String^>^ certificaciones, List<Especialidad^>^ especialidades, List<int>^ idCitasAsignadas, List<Paciente^>^ pacientesAsociados) {
    List<Medico^>^ listaMedicos = listarMedicos();
    for (int i = 0; i < listaMedicos->Count; i++) {
        Medico^ medico = listaMedicos[i];
        if (medico->getIdMedico() == idMedico) {
            // Modificar datos del médico
            medico->setIdPersona(idPersona);
            medico->setNombre(nombre);
            medico->setEdad(edad);
            medico->setGenero(genero);
            medico->setDireccion(direccion);
            medico->setTelefono(telefono);
            medico->setEmail(email);
            medico->setEstadoCivil(estadoCivil);
            medico->setAltura(altura);
            medico->setNumeroColegioMedico(numeroColegioMedico);
            medico->setCertificaciones(certificaciones);
            medico->setEspecialidades(especialidades);
            medico->setidCitasAsignadas(idCitasAsignadas);
            medico->setPacientesAsociados(pacientesAsociados);
            break; // Salimos del bucle For
        }
    }
    escribirArchivo(listaMedicos); // Escribimos los datos actualizados en el archivo
}

// Método para eliminar médico
void MedicoController::eliminarMedico(int idMedico) {
    List<Medico^>^ listaMedicos = listarMedicos();
    for (int i = 0; i < listaMedicos->Count; i++) {
        Medico^ medico = listaMedicos[i];
        if (medico->getIdMedico() == idMedico) {
            listaMedicos->RemoveAt(i);
            break; // Salimos del bucle For
        }
    }
    escribirArchivo(listaMedicos);
}

// Método para buscar médicos por código o especialidad
List<Medico^>^ MedicoController::buscarMedicosByIdOrEspecialidad(int idMedico, String^ especialidad) {
    List<Medico^>^ listaMedicos = listarMedicos();
    List<Medico^>^ medicosEncontrados = gcnew List<Medico^>();
    for each (Medico ^ medico in listaMedicos) {
        if (medico->getIdMedico() == idMedico) {
            // Verificar por ID de médico
            medicosEncontrados->Add(medico);
        }
        else {
            // Verificar por especialidad
            for each (Especialidad ^ esp in medico->getEspecialidades()) {
                if (esp->getNombre()->Equals(especialidad, StringComparison::InvariantCultureIgnoreCase)) {
                    medicosEncontrados->Add(medico);
                }
            }
        }
    }
    return medicosEncontrados;
}

// Método para buscar médicos por código o especialidad
Medico^ MedicoController::buscarMedicoById(int idMedico) {
    List<Medico^>^ listaMedicos = listarMedicos();
    Medico^ medicoEncontrado = gcnew Medico();
    for each (Medico ^ medico in listaMedicos) {
        if (medico->getIdMedico() == idMedico) {
            // Verificar por ID de médico
            medicoEncontrado->setIdPersona(medico->getIdPersona());
            medicoEncontrado->setNombre(medico->getNombre());
            medicoEncontrado->setEdad(medico->getEdad());
            medicoEncontrado->setGenero(medico->getGenero());
            medicoEncontrado->setDireccion(medico->getDireccion());
            medicoEncontrado->setTelefono(medico->getTelefono());
            medicoEncontrado->setEmail(medico->getEmail());
            medicoEncontrado->setEstadoCivil(medico->getEstadoCivil());
            medicoEncontrado->setAltura(medico->getAltura());
            medicoEncontrado->setIdMedico(medico->getIdMedico());
            medicoEncontrado->setNumeroColegioMedico(medico->getNumeroColegioMedico());
            medicoEncontrado->setCertificaciones(medico->getCertificaciones());
            medicoEncontrado->setEspecialidades(medico->getEspecialidades());
            medicoEncontrado->setidCitasAsignadas(medico->getidCitasAsignadas());
            medicoEncontrado->setPacientesAsociados(medico->getPacientesAsociados());
            break;
        }
    }
    return medicoEncontrado;
}