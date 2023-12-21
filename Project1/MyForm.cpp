#include "MyForm.h"
#include <random>
#include <cstring>
#include <fstream>
#include <string>

using namespace System;
using namespace System::Windows::Forms;
using namespace System::Runtime::InteropServices;

int correct = 0;
bool isRunning = false;
int trainTime = 60;
char* text;

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
        this->label_cps->Text = Convert::ToString(static_cast<double>(correct) / static_cast<double>(trainTime));
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

Void Project1::MyForm::radioButton_one_minute_CheckedChanged(System::Object^ sender, System::EventArgs^ e) { change_time(60); }

Void Project1::MyForm::radioButton_two_minutes_CheckedChanged(System::Object^ sender, System::EventArgs^ e) { change_time(120); }

Void Project1::MyForm::radioButton_three_minutes_CheckedChanged(System::Object^ sender, System::EventArgs^ e) { change_time(180); }

Void Project1::MyForm::change_time(int time)
{
    this->label_time->Text = Convert::ToString(time);
    trainTime = time;
}

[STAThreadAttribute]
int main(array<String^>^ args)
{
    setlocale(LC_ALL, "rus");

    std::ifstream file("text.txt");
    std::string string = "";

    if (file.is_open())
    {
        std::string line;
        while (std::getline(file, line))
        {
            string += " " + line;
        }
        file.close();
    }
    string.erase(string.begin());

    extern char* text;
    text = new char[string.size() + 1];
    strcpy_s(text, string.size() + 1, string.c_str());

    Application::SetCompatibleTextRenderingDefault(false);
    Application::EnableVisualStyles();
    Project1::MyForm form;
    Application::Run(% form);

    delete[] text;
}
