#include "Calculator.h"
using namespace System;
using namespace System::Windows::Forms;
[STAThread]
int main(array<String^>^ arg)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Calculator3::Calculator form;// ім'я вашого проекту, наприклад, myproekt або ін.
	Application::Run(% form);
}
