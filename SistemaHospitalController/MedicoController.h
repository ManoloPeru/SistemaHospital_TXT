#pragma once

namespace SistemaHospitalController {

	using namespace System;
	using namespace System::Collections::Generic;
	using namespace SistemaHospitalModel;

	public ref class MedicoController {

	public:
		MedicoController();
		List<Medico^>^ listarMedicos();
		void agregarMedico(int idPersona, String^ nombre, int edad, String^ genero, String^ direccion, String^ telefono, String^ email, String^ estadoCivil, float altura, int idMedico, String^ numeroColegioMedico, List<String^>^ certificaciones, List<Especialidad^>^ especialidades, List<int>^ idCitasAsignadas, List<Paciente^>^ pacientesAsociados);
		void modificarMedico(int idPersona, String^ nombre, int edad, String^ genero, String^ direccion, String^ telefono, String^ email, String^ estadoCivil, float altura, int idMedico, String^ numeroColegioMedico, List<String^>^ certificaciones, List<Especialidad^>^ especialidades, List<int>^ idCitasAsignadas, List<Paciente^>^ pacientesAsociados);
		void escribirArchivo(List<Medico^>^ listaMedicos);
		void eliminarMedico(int idMedico);
		List<Medico^>^ buscarMedicosByIdOrEspecialidad(int idMedico, String^ especialidad);
		Medico^ buscarMedicoById(int idMedico);
	};
}