#include "LoginForm.h"

#include <Windows.h>

using namespace PlantApp;

int main(array<String^>^ args) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    PlantApp::LoginForm form;
    Application::Run(% form);
    return 0;
}

