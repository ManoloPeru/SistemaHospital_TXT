#pragma once

namespace SistemaHospitalController {

	using namespace System;
	using namespace System::Collections::Generic;
	using namespace SistemaHospitalModel;

	public ref class EspecialidadController {

	public:
		EspecialidadController();
		List<Especialidad^>^ listarEspecialidades();
		Especialidad^ buscarEspecialidadById(int idEspecialidad);
		Especialidad^ buscarEspecialidadByNombre(String^ sNombre);
		List<Especialidad^>^ listarEspecialidadesBin(String^ pathArchivo);
		void escribirArchivoBin(List<Especialidad^>^ listaEspecialidades, String^ pathArchivo);
		void agregarEspecialidad(int idEspecialidad, String^ nombre, String^ descripcion, String^ pathArchivo);
		void modificarEspecialidad(int idEspecialidad, String^ nombre, String^ descripcion, String^ pathArchivo);
		void eliminarEspecialidad(int idEspecialidad, String^ pathArchivo);
		Especialidad^ buscarEspecialidadByIdBin(int idEspecialidad, String^ pathArchivo);
		Especialidad^ buscarEspecialidadByNombreBin(String^ sNombre, String^ pathArchivo);
	};
}