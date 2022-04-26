#include "MyForm.h"


using namespace std;
using namespace System;
using namespace System::Windows::Forms;
using namespace univeProject;
[STAThread]
void main() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew univeProject::update);




}

