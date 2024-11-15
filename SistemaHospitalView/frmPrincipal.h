#pragma once
#include "frmMantMedicos.h"
#include "frmVerCitas.h"
#include "frmMantEspecialidades.h"
#include "frmReporteEquiposMedicos.h"

namespace SistemaHospitalView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de frmPrincipal
	/// </summary>
	public ref class frmPrincipal : public System::Windows::Forms::Form
	{
	public:
		frmPrincipal(void)
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
		~frmPrincipal()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ mantenimientoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ medicoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ citasToolStripMenuItem;


	private: System::Windows::Forms::ToolStripMenuItem^ reportesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ verCitasToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ gesti�nDeEspecialidadesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ equiposM�dicosToolStripMenuItem;


	private:
		/// <summary>
		/// Variable del dise�ador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�todo necesario para admitir el Dise�ador. No se puede modificar
		/// el contenido de este m�todo con el editor de c�digo.
		/// </summary>
		void InitializeComponent(void)
		{
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->mantenimientoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->medicoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->gesti�nDeEspecialidadesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->citasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->verCitasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->reportesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->equiposM�dicosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14));
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->mantenimientoToolStripMenuItem,
					this->citasToolStripMenuItem, this->reportesToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Padding = System::Windows::Forms::Padding(14, 4, 0, 4);
			this->menuStrip1->Size = System::Drawing::Size(2065, 44);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menStripPrincipal";
			// 
			// mantenimientoToolStripMenuItem
			// 
			this->mantenimientoToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->medicoToolStripMenuItem,
					this->gesti�nDeEspecialidadesToolStripMenuItem
			});
			this->mantenimientoToolStripMenuItem->Name = L"mantenimientoToolStripMenuItem";
			this->mantenimientoToolStripMenuItem->Size = System::Drawing::Size(193, 36);
			this->mantenimientoToolStripMenuItem->Text = L"Mantenimiento";
			// 
			// medicoToolStripMenuItem
			// 
			this->medicoToolStripMenuItem->Name = L"medicoToolStripMenuItem";
			this->medicoToolStripMenuItem->Size = System::Drawing::Size(377, 36);
			this->medicoToolStripMenuItem->Text = L"M�dico";
			this->medicoToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPrincipal::medicoToolStripMenuItem_Click);
			// 
			// gesti�nDeEspecialidadesToolStripMenuItem
			// 
			this->gesti�nDeEspecialidadesToolStripMenuItem->Name = L"gesti�nDeEspecialidadesToolStripMenuItem";
			this->gesti�nDeEspecialidadesToolStripMenuItem->Size = System::Drawing::Size(377, 36);
			this->gesti�nDeEspecialidadesToolStripMenuItem->Text = L"Gesti�n de Especialidades";
			this->gesti�nDeEspecialidadesToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPrincipal::gesti�nDeEspecialidadesToolStripMenuItem_Click);
			// 
			// citasToolStripMenuItem
			// 
			this->citasToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->verCitasToolStripMenuItem });
			this->citasToolStripMenuItem->Name = L"citasToolStripMenuItem";
			this->citasToolStripMenuItem->Size = System::Drawing::Size(79, 36);
			this->citasToolStripMenuItem->Text = L"Citas";
			// 
			// verCitasToolStripMenuItem
			// 
			this->verCitasToolStripMenuItem->Name = L"verCitasToolStripMenuItem";
			this->verCitasToolStripMenuItem->Size = System::Drawing::Size(224, 36);
			this->verCitasToolStripMenuItem->Text = L"Ver Citas";
			this->verCitasToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPrincipal::verCitasToolStripMenuItem_Click);
			// 
			// reportesToolStripMenuItem
			// 
			this->reportesToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->equiposM�dicosToolStripMenuItem });
			this->reportesToolStripMenuItem->Name = L"reportesToolStripMenuItem";
			this->reportesToolStripMenuItem->Size = System::Drawing::Size(121, 36);
			this->reportesToolStripMenuItem->Text = L"Reportes";
			// 
			// equiposM�dicosToolStripMenuItem
			// 
			this->equiposM�dicosToolStripMenuItem->Name = L"equiposM�dicosToolStripMenuItem";
			this->equiposM�dicosToolStripMenuItem->Size = System::Drawing::Size(283, 36);
			this->equiposM�dicosToolStripMenuItem->Text = L"Equipos M�dicos";
			this->equiposM�dicosToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPrincipal::equiposM�dicosToolStripMenuItem_Click);
			// 
			// frmPrincipal
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(14, 29);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(2065, 973);
			this->Controls->Add(this->menuStrip1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->IsMdiContainer = true;
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(5);
			this->Name = L"frmPrincipal";
			this->Text = L"Bienvenido al Sistema de Gesti�n de un Hospital Inteligente";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void medicoToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		frmMantMedicos^ ventanaMedicos = gcnew frmMantMedicos();
		ventanaMedicos->MdiParent = this;
		ventanaMedicos->Show();
	}
private: System::Void verCitasToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	frmVerCitas^ ventanaVerCitas = gcnew frmVerCitas();
	ventanaVerCitas->MdiParent = this;
	ventanaVerCitas->Show();
}
private: System::Void gesti�nDeEspecialidadesToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	frmMantEspecialidades^ ventanaEspecialidades = gcnew frmMantEspecialidades();
	ventanaEspecialidades->MdiParent = this;
	ventanaEspecialidades->Show();
}
private: System::Void equiposM�dicosToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	frmReporteEquiposMedicos^ ventanaRptEquiposMedicos = gcnew frmReporteEquiposMedicos();
	ventanaRptEquiposMedicos->MdiParent = this;
	ventanaRptEquiposMedicos->Show();
}
};
}
