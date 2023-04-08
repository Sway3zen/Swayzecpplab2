#include "Lab41.h"
#include <Windows.h>

using namespace System;
using namespace System::Windows::Forms;

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    Swayzecpplab2::Lab41 form; // Instantiate the form
    Application::Run(% form); // Pass the form instance to Run
    return 0;
}
