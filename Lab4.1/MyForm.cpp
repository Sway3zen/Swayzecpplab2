#include "MyForm.h"
#include <Windows.h>

using namespace System;
using namespace System::Windows::Forms;

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    Lab41::MyForm form; // Instantiate the form
    Application::Run(% form); // Pass the form instance to Run
    return 0;
}
