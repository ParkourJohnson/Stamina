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









	private: System::Windows::Forms::Timer^ timer;
	private: System::Windows::Forms::Button^ button_start;
	private: System::Windows::Forms::Label^ label_correct;
	private: System::Windows::Forms::Label^ label_cps;

	private: System::Windows::Forms::Label^ label_time;
	private: System::Windows::Forms::TextBox^ input;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::RadioButton^ radioButton_one_minute;
	private: System::Windows::Forms::RadioButton^ radioButton_two_minutes;
	private: System::Windows::Forms::RadioButton^ radioButton_three_minutes;












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
			this->timer = (gcnew System::Windows::Forms::Timer(this->components));
			this->button_start = (gcnew System::Windows::Forms::Button());
			this->label_correct = (gcnew System::Windows::Forms::Label());
			this->label_cps = (gcnew System::Windows::Forms::Label());
			this->label_time = (gcnew System::Windows::Forms::Label());
			this->input = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->radioButton_one_minute = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton_two_minutes = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton_three_minutes = (gcnew System::Windows::Forms::RadioButton());
			this->SuspendLayout();
			// 
			// sentence
			// 
			this->sentence->BackColor = System::Drawing::Color::Gold;
			this->sentence->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->sentence->Font = (gcnew System::Drawing::Font(L"Times New Roman", 72, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->sentence->Location = System::Drawing::Point(12, 9);
			this->sentence->Name = L"sentence";
			this->sentence->Size = System::Drawing::Size(1117, 129);
			this->sentence->TabIndex = 0;
			this->sentence->Text = L"Sentence";
			this->sentence->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// timer
			// 
			this->timer->Tick += gcnew System::EventHandler(this, &MyForm::timer_Tick);
			// 
			// button_start
			// 
			this->button_start->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_start->Location = System::Drawing::Point(523, 580);
			this->button_start->Name = L"button_start";
			this->button_start->Size = System::Drawing::Size(100, 75);
			this->button_start->TabIndex = 1;
			this->button_start->Text = L"START";
			this->button_start->UseVisualStyleBackColor = true;
			this->button_start->Click += gcnew System::EventHandler(this, &MyForm::button_start_Click);
			// 
			// label_correct
			// 
			this->label_correct->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->label_correct->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_correct->Location = System::Drawing::Point(618, 288);
			this->label_correct->Name = L"label_correct";
			this->label_correct->Size = System::Drawing::Size(70, 25);
			this->label_correct->TabIndex = 2;
			this->label_correct->Text = L"-";
			this->label_correct->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label_cps
			// 
			this->label_cps->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->label_cps->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_cps->Location = System::Drawing::Point(618, 313);
			this->label_cps->Name = L"label_cps";
			this->label_cps->Size = System::Drawing::Size(70, 25);
			this->label_cps->TabIndex = 3;
			this->label_cps->Text = L"-";
			this->label_cps->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label_time
			// 
			this->label_time->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->label_time->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label_time->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_time->Location = System::Drawing::Point(1054, 580);
			this->label_time->Name = L"label_time";
			this->label_time->Size = System::Drawing::Size(75, 75);
			this->label_time->TabIndex = 5;
			this->label_time->Text = L"60";
			this->label_time->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// input
			// 
			this->input->BackColor = System::Drawing::Color::DodgerBlue;
			this->input->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->input->Location = System::Drawing::Point(31, 632);
			this->input->Name = L"input";
			this->input->Size = System::Drawing::Size(100, 13);
			this->input->TabIndex = 6;
			this->input->TextChanged += gcnew System::EventHandler(this, &MyForm::input_TextChanged);
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(438, 288);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(185, 25);
			this->label1->TabIndex = 7;
			this->label1->Text = L"Символов введено:";
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(438, 313);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(185, 25);
			this->label2->TabIndex = 8;
			this->label2->Text = L"Символов в секунду:";
			// 
			// radioButton_one_minute
			// 
			this->radioButton_one_minute->AutoSize = true;
			this->radioButton_one_minute->Checked = true;
			this->radioButton_one_minute->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->radioButton_one_minute->Location = System::Drawing::Point(916, 579);
			this->radioButton_one_minute->Name = L"radioButton_one_minute";
			this->radioButton_one_minute->Size = System::Drawing::Size(103, 25);
			this->radioButton_one_minute->TabIndex = 9;
			this->radioButton_one_minute->TabStop = true;
			this->radioButton_one_minute->Text = L"1 Минута";
			this->radioButton_one_minute->UseVisualStyleBackColor = true;
			this->radioButton_one_minute->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton_one_minute_CheckedChanged);
			// 
			// radioButton_two_minutes
			// 
			this->radioButton_two_minutes->AutoSize = true;
			this->radioButton_two_minutes->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->radioButton_two_minutes->Location = System::Drawing::Point(916, 602);
			this->radioButton_two_minutes->Name = L"radioButton_two_minutes";
			this->radioButton_two_minutes->Size = System::Drawing::Size(108, 25);
			this->radioButton_two_minutes->TabIndex = 10;
			this->radioButton_two_minutes->Text = L"2 Минуты";
			this->radioButton_two_minutes->UseVisualStyleBackColor = true;
			this->radioButton_two_minutes->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton_two_minutes_CheckedChanged);
			// 
			// radioButton_three_minutes
			// 
			this->radioButton_three_minutes->AutoSize = true;
			this->radioButton_three_minutes->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->radioButton_three_minutes->Location = System::Drawing::Point(916, 625);
			this->radioButton_three_minutes->Name = L"radioButton_three_minutes";
			this->radioButton_three_minutes->Size = System::Drawing::Size(108, 25);
			this->radioButton_three_minutes->TabIndex = 11;
			this->radioButton_three_minutes->TabStop = true;
			this->radioButton_three_minutes->Text = L"3 Минуты";
			this->radioButton_three_minutes->UseVisualStyleBackColor = true;
			this->radioButton_three_minutes->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton_three_minutes_CheckedChanged);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DodgerBlue;
			this->ClientSize = System::Drawing::Size(1141, 664);
			this->Controls->Add(this->radioButton_three_minutes);
			this->Controls->Add(this->radioButton_two_minutes);
			this->Controls->Add(this->radioButton_one_minute);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->input);
			this->Controls->Add(this->label_time);
			this->Controls->Add(this->label_cps);
			this->Controls->Add(this->label_correct);
			this->Controls->Add(this->button_start);
			this->Controls->Add(this->sentence);
			this->Name = L"MyForm";
			this->Text = L"Stamina";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button_start_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void timer_Tick(System::Object^ sender, System::EventArgs^ e);

	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e);

	private: System::Void input_TextChanged(System::Object^ sender, System::EventArgs^ e);

	private: System::Void sentence_update();
	
	private: System::Void radioButton_one_minute_CheckedChanged(System::Object^ sender, System::EventArgs^ e);

	private: System::Void radioButton_two_minutes_CheckedChanged(System::Object^ sender, System::EventArgs^ e);

	private: System::Void radioButton_three_minutes_CheckedChanged(System::Object^ sender, System::EventArgs^ e);

	private: System::Void change_time(int time);
};
}
