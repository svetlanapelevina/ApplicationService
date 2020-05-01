#include "MainForm.h"
#include <Windows.h>

using namespace System;
using namespace System::Windows::Forms;
using namespace CarService;

[System::STAThread]
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	CarService::MainForm form;
	Application::Run(% form);
	return 0;
}