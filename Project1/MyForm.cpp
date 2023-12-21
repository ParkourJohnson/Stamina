#include "MyForm.h"
#include <random>
#include <cstring>

using namespace System;
using namespace System::Windows::Forms;
using namespace System::Runtime::InteropServices;

int correct = 0;
bool isRunning = false;
char text[] = "Когда человек сознательно или интуитивно выбирает себе в жизни какую-то цель, жизненную задачу, он невольно дает себе оценку. По тому, ради чего человек живет, можно судить и о его самооценке - низкой или высокой. Если человек живет, чтобы приносить людям добро, облегчать их страдания, давать людям радость, то он оценивает себя на уровне этой своей человечности.Он ставит себе цель, достойную человека. Только такая цель позволяет человеку прожить свою жизнь с достоинством и получить настоящую радость.Да, радость!Подумайте: если человек ставит себе задачей увеличивать в жизни добро, приносить людям счастье, какие неудачи могут его постигнуть? Не тому помочь? Но много ли людей не нуждаются в помощи ? Если жить только для себя, своими мелкими заботами о собственном благополучии, то от прожитого не останется и следа.Если же жить для других, то другие сберегут то, чему служил, чему отдавал силы. Можно по - разному определять цель своего существования, но цель должна быть.Надо иметь и принципы в жизни.Одно правило в жизни должно быть у каждого человека, в его цели жизни, в его принципах жизни, в его поведении : надо прожить жизнь с достоинством, чтобы не стыдно было вспоминать. Достоинство требует доброты, великодушия, умения не быть эгоистом, быть правдивым, хорошим другом, находить радость в помощи другим. Ради достоинства жизни надо уметь отказываться от мелких удовольствий и немалых тоже… Уметь извиняться, признавать перед другими ошибку - лучше, чем врать. Обманывая, человек прежде всего обманывает самого себя, ибо он думает, что успешно соврал, а люди поняли и из деликатности промолчали. Жизнь - прежде всего творчество, но это не значит, что каждый человек, чтобы жить, должен родиться художником, балериной или ученым.Можно творить просто добрую атмосферу вокруг себя.Человек может принести с собой атмосферу подозрительности, какого - то тягостного молчания, а может внести сразу радость, свет.Вот это и есть творчество.";

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
