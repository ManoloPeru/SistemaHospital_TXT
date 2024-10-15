#pragma once
#include "frmNuevoMedico.h"
#include "frmEditarMedico.h"

namespace SistemaHospitalView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Collections::Generic;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace SistemaHospitalModel;
	using namespace SistemaHospitalController;

	/// <summary>
	/// Resumen de frmMantMedicos
	/// </summary>
	public ref class frmMantMedicos : public System::Windows::Forms::Form
	{
	public:
		frmMantMedicos(void)
		{
			InitializeComponent();
			//
			//TODO: agregar c�digo de constructor aqu�
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n usando.
		/// </summary>
		~frmMantMedicos()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ grpBoxBusq;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ btnBuscar;
	private: System::Windows::Forms::ComboBox^ cmbEspecialidad;
	private: System::Windows::Forms::DataGridView^ dgvLista;

	private: System::Windows::Forms::Button^ btnNuevo;
	private: System::Windows::Forms::Button^ btnEditar;
	private: System::Windows::Forms::Button^ btnEliminar;


	private: System::Windows::Forms::TextBox^ txtId;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colId;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colNombre;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colEdad;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colGenero;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colDirecci�n;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colTelefono;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colEmail;
	private: System::Windows::Forms::Button^ btnCertificaciones;
	private: System::Windows::Forms::Button^ btnCitasAsignadas;
	private: System::Windows::Forms::Button^ btnPacientesAsociados;
	private: System::Windows::Forms::Button^ btnLimpiar;


	protected:

	private:
		/// <summary>
		/// Variable del dise�ador necesaria.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�todo necesario para admitir el Dise�ador. No se puede modificar
		/// el contenido de este m�todo con el editor de c�digo.
		/// </summary>
		void InitializeComponent(void)
		{
			this->grpBoxBusq = (gcnew System::Windows::Forms::GroupBox());
			this->btnLimpiar = (gcnew System::Windows::Forms::Button());
			this->txtId = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->btnBuscar = (gcnew System::Windows::Forms::Button());
			this->cmbEspecialidad = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dgvLista = (gcnew System::Windows::Forms::DataGridView());
			this->colId = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colNombre = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colEdad = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colGenero = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colDirecci�n = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colTelefono = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colEmail = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->btnNuevo = (gcnew System::Windows::Forms::Button());
			this->btnEditar = (gcnew System::Windows::Forms::Button());
			this->btnEliminar = (gcnew System::Windows::Forms::Button());
			this->btnCertificaciones = (gcnew System::Windows::Forms::Button());
			this->btnCitasAsignadas = (gcnew System::Windows::Forms::Button());
			this->btnPacientesAsociados = (gcnew System::Windows::Forms::Button());
			this->grpBoxBusq->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvLista))->BeginInit();
			this->SuspendLayout();
			// 
			// grpBoxBusq
			// 
			this->grpBoxBusq->Controls->Add(this->btnLimpiar);
			this->grpBoxBusq->Controls->Add(this->txtId);
			this->grpBoxBusq->Controls->Add(this->label2);
			this->grpBoxBusq->Controls->Add(this->btnBuscar);
			this->grpBoxBusq->Controls->Add(this->cmbEspecialidad);
			this->grpBoxBusq->Controls->Add(this->label1);
			this->grpBoxBusq->Location = System::Drawing::Point(17, 12);
			this->grpBoxBusq->Name = L"grpBoxBusq";
			this->grpBoxBusq->Size = System::Drawing::Size(1491, 131);
			this->grpBoxBusq->TabIndex = 0;
			this->grpBoxBusq->TabStop = false;
			this->grpBoxBusq->Text = L"Criterios de B�squeda";
			// 
			// btnLimpiar
			// 
			this->btnLimpiar->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->btnLimpiar->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnLimpiar->Location = System::Drawing::Point(1260, 63);
			this->btnLimpiar->Name = L"btnLimpiar";
			this->btnLimpiar->Size = System::Drawing::Size(162, 37);
			this->btnLimpiar->TabIndex = 5;
			this->btnLimpiar->Text = L"Limpiar";
			this->btnLimpiar->UseVisualStyleBackColor = false;
			this->btnLimpiar->Click += gcnew System::EventHandler(this, &frmMantMedicos::btnLimpiar_Click);
			// 
			// txtId
			// 
			this->txtId->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->txtId->Location = System::Drawing::Point(86, 63);
			this->txtId->Name = L"txtId";
			this->txtId->Size = System::Drawing::Size(256, 34);
			this->txtId->TabIndex = 4;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(35, 63);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(39, 29);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Id:";
			// 
			// btnBuscar
			// 
			this->btnBuscar->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->btnBuscar->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnBuscar->Location = System::Drawing::Point(1064, 62);
			this->btnBuscar->Name = L"btnBuscar";
			this->btnBuscar->Size = System::Drawing::Size(162, 37);
			this->btnBuscar->TabIndex = 2;
			this->btnBuscar->Text = L"Buscar";
			this->btnBuscar->UseVisualStyleBackColor = false;
			this->btnBuscar->Click += gcnew System::EventHandler(this, &frmMantMedicos::btnBuscar_Click);
			// 
			// cmbEspecialidad
			// 
			this->cmbEspecialidad->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->cmbEspecialidad->FormattingEnabled = true;
			this->cmbEspecialidad->Items->AddRange(gcnew cli::array< System::Object^  >(8) {
				L"--TODOS--", L"Cardiolog�a", L"Dermatolog�a",
					L"Gastroenterolog�a", L"Neurolog�a", L"Neumolog�a", L"Pediatr�a", L"Oftalmolog�a"
			});
			this->cmbEspecialidad->Location = System::Drawing::Point(585, 63);
			this->cmbEspecialidad->Name = L"cmbEspecialidad";
			this->cmbEspecialidad->Size = System::Drawing::Size(394, 37);
			this->cmbEspecialidad->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(408, 66);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(159, 29);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Especialidad:";
			this->label1->Click += gcnew System::EventHandler(this, &frmMantMedicos::label1_Click);
			// 
			// dgvLista
			// 
			this->dgvLista->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->dgvLista->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvLista->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
				this->colId, this->colNombre,
					this->colEdad, this->colGenero, this->colDirecci�n, this->colTelefono, this->colEmail
			});
			this->dgvLista->Location = System::Drawing::Point(12, 162);
			this->dgvLista->Name = L"dgvLista";
			this->dgvLista->RowHeadersWidth = 51;
			this->dgvLista->RowTemplate->Height = 24;
			this->dgvLista->Size = System::Drawing::Size(1491, 477);
			this->dgvLista->TabIndex = 1;
			this->dgvLista->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &frmMantMedicos::dataGridView1_CellContentClick);
			// 
			// colId
			// 
			this->colId->HeaderText = L"Id";
			this->colId->MinimumWidth = 6;
			this->colId->Name = L"colId";
			this->colId->Width = 80;
			// 
			// colNombre
			// 
			this->colNombre->HeaderText = L"Nombre";
			this->colNombre->MinimumWidth = 6;
			this->colNombre->Name = L"colNombre";
			this->colNombre->Width = 300;
			// 
			// colEdad
			// 
			this->colEdad->HeaderText = L"Edad";
			this->colEdad->MinimumWidth = 6;
			this->colEdad->Name = L"colEdad";
			this->colEdad->Width = 80;
			// 
			// colGenero
			// 
			this->colGenero->HeaderText = L"G�nero";
			this->colGenero->MinimumWidth = 6;
			this->colGenero->Name = L"colGenero";
			this->colGenero->Width = 125;
			// 
			// colDirecci�n
			// 
			this->colDirecci�n->HeaderText = L"Direcci�n";
			this->colDirecci�n->MinimumWidth = 6;
			this->colDirecci�n->Name = L"colDirecci�n";
			this->colDirecci�n->Width = 500;
			// 
			// colTelefono
			// 
			this->colTelefono->HeaderText = L"Tel�fono";
			this->colTelefono->MinimumWidth = 6;
			this->colTelefono->Name = L"colTelefono";
			this->colTelefono->Width = 150;
			// 
			// colEmail
			// 
			this->colEmail->HeaderText = L"Email";
			this->colEmail->MinimumWidth = 6;
			this->colEmail->Name = L"colEmail";
			this->colEmail->Width = 300;
			// 
			// btnNuevo
			// 
			this->btnNuevo->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->btnNuevo->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnNuevo->Location = System::Drawing::Point(25, 667);
			this->btnNuevo->Name = L"btnNuevo";
			this->btnNuevo->Size = System::Drawing::Size(162, 37);
			this->btnNuevo->TabIndex = 3;
			this->btnNuevo->Text = L"Nuevo";
			this->btnNuevo->UseVisualStyleBackColor = false;
			this->btnNuevo->Click += gcnew System::EventHandler(this, &frmMantMedicos::btnNuevo_Click);
			// 
			// btnEditar
			// 
			this->btnEditar->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->btnEditar->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnEditar->Location = System::Drawing::Point(234, 667);
			this->btnEditar->Name = L"btnEditar";
			this->btnEditar->Size = System::Drawing::Size(162, 37);
			this->btnEditar->TabIndex = 4;
			this->btnEditar->Text = L"Editar";
			this->btnEditar->UseVisualStyleBackColor = false;
			this->btnEditar->Click += gcnew System::EventHandler(this, &frmMantMedicos::btnEditar_Click);
			// 
			// btnEliminar
			// 
			this->btnEliminar->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->btnEliminar->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnEliminar->Location = System::Drawing::Point(430, 667);
			this->btnEliminar->Name = L"btnEliminar";
			this->btnEliminar->Size = System::Drawing::Size(162, 37);
			this->btnEliminar->TabIndex = 5;
			this->btnEliminar->Text = L"Eliminar";
			this->btnEliminar->UseVisualStyleBackColor = false;
			this->btnEliminar->Click += gcnew System::EventHandler(this, &frmMantMedicos::btnEliminar_Click);
			// 
			// btnCertificaciones
			// 
			this->btnCertificaciones->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->btnCertificaciones->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnCertificaciones->Location = System::Drawing::Point(620, 667);
			this->btnCertificaciones->Name = L"btnCertificaciones";
			this->btnCertificaciones->Size = System::Drawing::Size(278, 37);
			this->btnCertificaciones->TabIndex = 6;
			this->btnCertificaciones->Text = L"Certificaciones";
			this->btnCertificaciones->UseVisualStyleBackColor = false;
			// 
			// btnCitasAsignadas
			// 
			this->btnCitasAsignadas->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->btnCitasAsignadas->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnCitasAsignadas->Location = System::Drawing::Point(925, 667);
			this->btnCitasAsignadas->Name = L"btnCitasAsignadas";
			this->btnCitasAsignadas->Size = System::Drawing::Size(252, 37);
			this->btnCitasAsignadas->TabIndex = 7;
			this->btnCitasAsignadas->Text = L"Citas asignadas";
			this->btnCitasAsignadas->UseVisualStyleBackColor = false;
			// 
			// btnPacientesAsociados
			// 
			this->btnPacientesAsociados->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->btnPacientesAsociados->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnPacientesAsociados->Location = System::Drawing::Point(1214, 667);
			this->btnPacientesAsociados->Name = L"btnPacientesAsociados";
			this->btnPacientesAsociados->Size = System::Drawing::Size(289, 37);
			this->btnPacientesAsociados->TabIndex = 8;
			this->btnPacientesAsociados->Text = L"Pacientes asociados";
			this->btnPacientesAsociados->UseVisualStyleBackColor = false;
			// 
			// frmMantMedicos
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(14, 29);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1565, 740);
			this->Controls->Add(this->btnPacientesAsociados);
			this->Controls->Add(this->btnCitasAsignadas);
			this->Controls->Add(this->btnCertificaciones);
			this->Controls->Add(this->btnEliminar);
			this->Controls->Add(this->btnEditar);
			this->Controls->Add(this->btnNuevo);
			this->Controls->Add(this->dgvLista);
			this->Controls->Add(this->grpBoxBusq);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(5);
			this->Name = L"frmMantMedicos";
			this->Text = L"Mantenimiento de M�dicos";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &frmMantMedicos::frmMantMedicos_Load);
			this->grpBoxBusq->ResumeLayout(false);
			this->grpBoxBusq->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvLista))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}

	private: System::Void frmMantMedicos_Load(System::Object^ sender, System::EventArgs^ e) {
		// Aqu� se ejecuta el m�todo listarMedicos cuando se carga el formulario
		MedicoController^ medicoController = gcnew MedicoController();
		List<Medico^>^ listaMedicos = medicoController->listarMedicos();

		mostrarGrilla(listaMedicos);
	}

	private: System::Void btnBuscar_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ id = this->txtId->Text;
		String^ especialidad = this->cmbEspecialidad->Text;
		List<Medico^>^ listaMedicos;
		MedicoController^ medicoController = gcnew MedicoController();
		if (id->CompareTo("") == 0 && especialidad->CompareTo("--TODOS--") == 0) {
			listaMedicos = medicoController->listarMedicos();
		}
		else
		{
			int idBuscado = 0; //Valor por defecto
			if (id->CompareTo("") != 0) {
				idBuscado = Convert::ToInt32(id);
			}
			listaMedicos = medicoController->buscarMedicosByIdOrEspecialidad(idBuscado, especialidad);
		}
		mostrarGrilla(listaMedicos);
	}

	private: System::Void btnNuevo_Click(System::Object^ sender, System::EventArgs^ e) {
		frmNuevoMedico^ ventanaNuevoMedico = gcnew frmNuevoMedico();
		ventanaNuevoMedico->ShowDialog();
		this->dgvLista->Rows->Clear();
		MedicoController^ medicoController = gcnew MedicoController();
		List<Medico^>^ listaMedicos = medicoController->listarMedicos();
		mostrarGrilla(listaMedicos);
	}

	private: System::Void btnEliminar_Click(System::Object^ sender, System::EventArgs^ e) {
		// Verificar si hay al menos una fila seleccionada
		if (dgvLista->SelectedRows->Count == 0) {
			MessageBox::Show("Por favor, seleccione un registro para eliminar un registro.", "Advertencia", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return; // Salir del evento si no hay filas seleccionadas
		}

		// Preguntar al usuario si est� seguro de eliminar el registro
		System::Windows::Forms::DialogResult resultado = MessageBox::Show("�Est� seguro de que desea eliminar el registro seleccionado?",
			"Confirmaci�n de eliminaci�n", MessageBoxButtons::YesNo, MessageBoxIcon::Question);

		// Si el usuario selecciona "No", cancelar la operaci�n
		if (resultado == System::Windows::Forms::DialogResult::No) {
			return; // Salir del evento si el usuario cancela
		}

		MedicoController^ medicoController = gcnew MedicoController();
		for (int i = 0; i < this->dgvLista->SelectedRows->Count; i++) {
			int filaSeleccionada = this->dgvLista->SelectedRows[i]->Index;
			int idEliminar = Convert::ToInt32(this->dgvLista->Rows[filaSeleccionada]->Cells[0]->Value->ToString());
			medicoController->eliminarMedico(idEliminar);
		}
		MessageBox::Show("El alumno ha sido eliminado con �xito");
	}

	private: System::Void btnEditar_Click(System::Object^ sender, System::EventArgs^ e) {
		// Verificar si hay al menos una fila seleccionada
		if (dgvLista->SelectedRows->Count == 0) {
			MessageBox::Show("Por favor, seleccione un registro para editar un registro.", "Advertencia", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return; // Salir del evento si no hay filas seleccionadas
		}

		int filaSeleccionada = this->dgvLista->SelectedRows[0]->Index; /*Le pongo [0] porque deseo el �ndice de la �nica fila que he seleccionado*/
		int idEditar = Convert::ToInt32(this->dgvLista->Rows[filaSeleccionada]->Cells[0]->Value->ToString());
		MedicoController^ medicoController = gcnew MedicoController();
		Medico^ objMedico = medicoController->buscarMedicoById(idEditar);
		
		frmEditarMedico^ ventanaEditarMedico = gcnew frmEditarMedico(objMedico);
		ventanaEditarMedico->ShowDialog();
		this->dgvLista->Rows->Clear();
		List<Medico^>^ listaMedicos = medicoController->listarMedicos();
		mostrarGrilla(listaMedicos);
	}
		   /*METODOSPERSONALES*/
	public: void mostrarGrilla(List<Medico^>^ listaMedicos) {
		this->dgvLista->Rows->Clear();
		for (int i = 0; i < listaMedicos->Count; i++) {
			Medico^ medico = listaMedicos[i];
			array<String^>^ filaGrilla = gcnew array<String^>(7);
			filaGrilla[0] = Convert::ToString(medico->getIdMedico());
			filaGrilla[1] = medico->getNombre();
			filaGrilla[2] = Convert::ToString(medico->getEdad());
			filaGrilla[3] = medico->getGenero();
			filaGrilla[4] = medico->getDireccion();
			filaGrilla[5] = medico->getTelefono();
			filaGrilla[6] = medico->getEmail();
			this->dgvLista->Rows->Add(filaGrilla);
		}
	}

	private: System::Void btnLimpiar_Click(System::Object^ sender, System::EventArgs^ e) {
		// Aqu� se ejecuta el m�todo listarMedicos cuando se carga el formulario
		MedicoController^ medicoController = gcnew MedicoController();
		List<Medico^>^ listaMedicos = medicoController->listarMedicos();

		mostrarGrilla(listaMedicos);
	}
};
}
