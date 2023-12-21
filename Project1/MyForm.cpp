#include "MyForm.h"
#include <random>
#include <cstring>

using namespace System;
using namespace System::Windows::Forms;
using namespace System::Runtime::InteropServices;

int correct = 0;
bool isRunning = false;
char text[] = "����� ������� ����������� ��� ���������� �������� ���� � ����� �����-�� ����, ��������� ������, �� �������� ���� ���� ������. �� ����, ���� ���� ������� �����, ����� ������ � � ��� ���������� - ������ ��� �������. ���� ������� �����, ����� ��������� ����� �����, ��������� �� ���������, ������ ����� �������, �� �� ��������� ���� �� ������ ���� ����� ������������.�� ������ ���� ����, ��������� ��������. ������ ����� ���� ��������� �������� ������� ���� ����� � ������������ � �������� ��������� �������.��, �������!���������: ���� ������� ������ ���� ������� ����������� � ����� �����, ��������� ����� �������, ����� ������� ����� ��� ����������? �� ���� ������? �� ����� �� ����� �� ��������� � ������ ? ���� ���� ������ ��� ����, ������ ������� �������� � ����������� ������������, �� �� ��������� �� ��������� � �����.���� �� ���� ��� ������, �� ������ �������� ��, ���� ������, ���� ������� ����. ����� �� - ������� ���������� ���� ������ �������������, �� ���� ������ ����.���� ����� � �������� � �����.���� ������� � ����� ������ ���� � ������� ��������, � ��� ���� �����, � ��� ��������� �����, � ��� ��������� : ���� ������� ����� � ������������, ����� �� ������ ���� ����������. ����������� ������� �������, �����������, ������ �� ���� ��������, ���� ���������, ������� ������, �������� ������� � ������ ������. ���� ����������� ����� ���� ����� ������������ �� ������ ������������ � ������� ���� ����� ����������, ���������� ����� ������� ������ - �����, ��� �����. ���������, ������� ������ ����� ���������� ������ ����, ��� �� ������, ��� ������� ������, � ���� ������ � �� ������������ ����������. ����� - ������ ����� ����������, �� ��� �� ������, ��� ������ �������, ����� ����, ������ �������� ����������, ��������� ��� ������.����� ������� ������ ������ ��������� ������ ����.������� ����� �������� � ����� ��������� ����������������, ������ - �� ���������� ��������, � ����� ������ ����� �������, ����.��� ��� � ���� ����������.";

int getRandomNumber(int min, int max)
{
    std::srand(static_cast<unsigned int>(std::time(nullptr)));
    return min + (std::rand() % (max - min + 1));
}

Void Project1::MyForm::MyForm_Load(System::Object^ sender, System::EventArgs^ e)
{
    this->sentence->Text = Marshal::PtrToStringAnsi((IntPtr)text);
    this->button_start->Focus();
}

Void Project1::MyForm::button_start_Click(System::Object^ sender, System::EventArgs^ e)
{
    isRunning = true;
    this->timer->Enabled = true;
    this->button_start->Enabled = false;
}

Void Project1::MyForm::timer_Tick(System::Object^ sender, System::EventArgs^ e)
{
    this->label_time->Text = Convert::ToString(Convert::ToDouble(this->label_time->Text) - 0.1);
    if (this->label_time->Text == "0")
    {
        isRunning = false;
        this->timer->Enabled = false;
        this->label_time->Text = "60";
        this->button_start->Enabled = true;
        this->label_correct->Text = Convert::ToString(correct);
        this->label_cps->Text = Convert::ToString(static_cast<double>(correct) / 60.0);
        correct = 0;
    }
}

Void Project1::MyForm::input_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
    if (isRunning == true)
    {
        if (this->input->Text == Convert::ToString(this->sentence->Text[0]))
        {
            correct++;
            this->sentence_update();
        }
    }
    this->input->Text = "";
}

Void Project1::MyForm::sentence_update()
{
    memmove(text, text + 1, strlen(text));
    this->sentence->Text = Marshal::PtrToStringAnsi((IntPtr)text);
}

[STAThreadAttribute]
int main(array<String^>^ args)
{
    Application::SetCompatibleTextRenderingDefault(false);
    Application::EnableVisualStyles();
    Project1::MyForm form;
    Application::Run(% form);
}
