#pragma once

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ sentence;

	protected:



	private: System::Windows::Forms::Label^ label_time;
	private: System::Windows::Forms::Label^ label_timeNum;




	private: System::Windows::Forms::Timer^ timer;
	private: System::Windows::Forms::Label^ label_entered_chars;
	private: System::Windows::Forms::Label^ label_mistakes;

	private: System::Windows::Forms::Label^ label_cpm;





	private: System::ComponentModel::IContainer^ components;
	protected:


	protected:

	protected:

	protected:


	protected:

	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->sentence = (gcnew System::Windows::Forms::Label());
			this->label_time = (gcnew System::Windows::Forms::Label());
			this->label_timeNum = (gcnew System::Windows::Forms::Label());
			this->timer = (gcnew System::Windows::Forms::Timer(this->components));
			this->label_entered_chars = (gcnew System::Windows::Forms::Label());
			this->label_mistakes = (gcnew System::Windows::Forms::Label());
			this->label_cpm = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// sentence
			// 
			this->sentence->Font = (gcnew System::Drawing::Font(L"Times New Roman", 72, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->sentence->Location = System::Drawing::Point(12, 57);
			this->sentence->Name = L"sentence";
			this->sentence->Size = System::Drawing::Size(1117, 129);
			this->sentence->TabIndex = 0;
			this->sentence->Text = L"Sentence";
			this->sentence->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label_time
			// 
			this->label_time->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->label_time->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_time->Location = System::Drawing::Point(507, 591);
			this->label_time->Name = L"label_time";
			this->label_time->Size = System::Drawing::Size(73, 64);
			this->label_time->TabIndex = 3;
			this->label_time->Text = L"Время:";
			this->label_time->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label_timeNum
			// 
			this->label_timeNum->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->label_timeNum->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_timeNum->Location = System::Drawing::Point(576, 591);
			this->label_timeNum->Name = L"label_timeNum";
			this->label_timeNum->Size = System::Drawing::Size(52, 64);
			this->label_timeNum->TabIndex = 4;
			this->label_timeNum->Text = L"60";
			this->label_timeNum->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// timer
			// 
			this->timer->Tick += gcnew System::EventHandler(this, &MyForm::timer_Tick);
			// 
			// label_entered_chars
			// 
			this->label_entered_chars->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->label_entered_chars->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_entered_chars->Location = System::Drawing::Point(493, 263);
			this->label_entered_chars->Name = L"label_entered_chars";
			this->label_entered_chars->Size = System::Drawing::Size(148, 23);
			this->label_entered_chars->TabIndex = 5;
			this->label_entered_chars->Text = L"Символов введено:";
			this->label_entered_chars->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label_entered_chars->Visible = false;
			// 
			// label_mistakes
			// 
			this->label_mistakes->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->label_mistakes->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_mistakes->Location = System::Drawing::Point(493, 286);
			this->label_mistakes->Name = L"label_mistakes";
			this->label_mistakes->Size = System::Drawing::Size(148, 23);
			this->label_mistakes->TabIndex = 6;
			this->label_mistakes->Text = L"Кол-во ошибок:";
			this->label_mistakes->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label_mistakes->Visible = false;
			// 
			// label_cpm
			// 
			this->label_cpm->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->label_cpm->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_cpm->Location = System::Drawing::Point(493, 309);
			this->label_cpm->Name = L"label_cpm";
			this->label_cpm->Size = System::Drawing::Size(148, 23);
			this->label_cpm->TabIndex = 7;
			this->label_cpm->Text = L"Символов в минуту:";
			this->label_cpm->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label_cpm->Visible = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->ClientSize = System::Drawing::Size(1141, 664);
			this->Controls->Add(this->label_cpm);
			this->Controls->Add(this->label_mistakes);
			this->Controls->Add(this->label_entered_chars);
			this->Controls->Add(this->label_timeNum);
			this->Controls->Add(this->label_time);
			this->Controls->Add(this->sentence);
			this->Name = L"MyForm";
			this->Text = L"Stamina";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::MyForm_KeyDown);
			this->ResumeLayout(false);

		}
#pragma endregion
	
	
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e);

	private: System::Void timer_Tick(System::Object^ sender, System::EventArgs^ e);

	private: System::Void MyForm_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e);

};
}
