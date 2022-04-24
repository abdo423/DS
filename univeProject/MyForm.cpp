#include "MyForm.h"
using namespace std;
using namespace System;
using namespace System::Windows::Forms;
[STAThread]
void main(cli::array<System::String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew univeProject::MyForm);


}