#include "Calculator.h"
using namespace System;
using namespace System::Windows::Forms;
[STAThread]
int main(array<String^>^ arg)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Calculator3::Calculator form;// ��'� ������ �������, ���������, myproekt ��� ��.
	Application::Run(% form);
}
