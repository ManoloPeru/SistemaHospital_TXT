//#include "frmPrincipal.h" 
#include "frmLogin.h" 

using namespace System;
using namespace System::Windows::Forms;
using namespace SistemaHospitalView;

[STAThread] //Para trabajar mas de un hilo de ejecuci�n: SaveFile, ColunmComboBox
void main(array <String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	//frmPrincipal ventana; /*Estoy creando el objeto ventana que va a ser del tipo frmPrincipal*/
	frmLogin ventana;
	Application::Run(% ventana); /*Aqui estoy ejecutando la ventana inicial*/

}