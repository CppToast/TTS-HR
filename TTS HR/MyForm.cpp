#include "MyForm.h"
#include <string>
#include <windows.h>
#include <algorithm>
#include <mmsystem.h>
#include "resource.h"
using namespace std;
using namespace System;
using namespace System::Windows::Forms;
[STAThread]
void main() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(0);
	TTSHR::MyForm form;
	Application::Run(%form);
}

