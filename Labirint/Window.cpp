#include "Window.h"
#include "ErorrList.h"
#include "Developer.h"
#include "Helper.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
void Main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Labirint::Window Newer;
	Application::Run(%Newer);
}