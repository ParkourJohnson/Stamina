#include "MyForm.h"
#include <random>

using namespace System;
using namespace System::Windows::Forms;

int correct = 0;
int mistakes = 0;
bool isRunning = false;

int random(int a, int b)
{
	srand(time(NULL));
	if (a > 0) return a + rand() % (b - a);
	else return a + rand() % (abs(a) + b);
}

Void Project1::MyForm::timer_Tick(System::Object^ sender, System::EventArgs^ e) {
	this->label_timeNum->Text = Convert::ToString(Convert::ToDouble(this->label_timeNum->Text) - 0.1);
	if (Convert::ToDouble(this->label_timeNum->Text) == 0)
	{
		this->label_entered_chars->Text = Convert::ToString(correct);
		this->label_mistakes->Text = Convert::ToString(mistakes);
		this->label_cpm->Text = Convert::ToString(static_cast<double>(correct)/60.0);

		this->timer->Enabled = false;
		this->label_cpm->Visible = true;
		this->label_entered_chars->Visible = true;
		this->label_mistakes->Visible = true;
		isRunning = false;
	}
}

Void Project1::MyForm::MyForm_Load(System::Object^ sender, System::EventArgs^ e)
{
	int randomChar = random(97,122);
	this->sentence->Text = Convert::ToString(Convert::ToChar(randomChar));
}

Void Project1::MyForm::MyForm_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e)
{
	if (Convert::ToString(e->KeyCode)->ToLower() == "return")
	{
		isRunning = true;
		this->timer->Enabled = true;
	}

	if (isRunning == true)
	{
		if (Convert::ToString(e->KeyCode)->ToLower() == this->sentence->Text)
		{
			int randomChar = random(97, 122);
			this->sentence->Text = Convert::ToString(Convert::ToChar(randomChar));
			correct++;
		}
		else { mistakes++; }
	}
	
}

[STAThreadAttribute]
int main(array<String^>^ args)
{
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	Project1::MyForm form;
	Application::Run(% form);
}