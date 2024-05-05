#pragma once
#include "MainForm.h"
#include "RegisterForm.h"
namespace PlantApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// —водка дл€ RegisterForm
	/// </summary>
	public ref class RegisterForm : public System::Windows::Forms::Form
	{
	public:
		RegisterForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~RegisterForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ tbUsername;
	private: System::Windows::Forms::Label^ tbPassword;
	protected:


	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::DateTimePicker^ tbDate;
	private: System::Windows::Forms::TextBox^ tbPlants;


	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button1;

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(RegisterForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tbUsername = (gcnew System::Windows::Forms::Label());
			this->tbPassword = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->tbDate = (gcnew System::Windows::Forms::DateTimePicker());
			this->tbPlants = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Garamond", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(683, 58);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Sign In";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// tbUsername
			// 
			this->tbUsername->AutoSize = true;
			this->tbUsername->Font = (gcnew System::Drawing::Font(L"Garamond", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tbUsername->Location = System::Drawing::Point(43, 104);
			this->tbUsername->Name = L"tbUsername";
			this->tbUsername->Size = System::Drawing::Size(103, 26);
			this->tbUsername->TabIndex = 1;
			this->tbUsername->Text = L"Username";
			// 
			// tbPassword
			// 
			this->tbPassword->AutoSize = true;
			this->tbPassword->Font = (gcnew System::Drawing::Font(L"Garamond", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tbPassword->Location = System::Drawing::Point(46, 181);
			this->tbPassword->Name = L"tbPassword";
			this->tbPassword->Size = System::Drawing::Size(97, 26);
			this->tbPassword->TabIndex = 2;
			this->tbPassword->Text = L"Password";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Garamond", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(46, 261);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(118, 26);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Your Plants";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Garamond", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(43, 335);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(236, 26);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Last time watering plants";
			// 
			// tbDate
			// 
			this->tbDate->CustomFormat = L"yyyy/MM/dd";
			this->tbDate->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->tbDate->Location = System::Drawing::Point(48, 410);
			this->tbDate->Name = L"tbDate";
			this->tbDate->Size = System::Drawing::Size(231, 22);
			this->tbDate->TabIndex = 5;
			// 
			// tbPlants
			// 
			this->tbPlants->Font = (gcnew System::Drawing::Font(L"Georgia", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tbPlants->Location = System::Drawing::Point(210, 261);
			this->tbPlants->Name = L"tbPlants";
			this->tbPlants->Size = System::Drawing::Size(322, 30);
			this->tbPlants->TabIndex = 6;
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Georgia", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox2->Location = System::Drawing::Point(210, 181);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(322, 30);
			this->textBox2->TabIndex = 7;
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Georgia", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox3->Location = System::Drawing::Point(210, 104);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(322, 30);
			this->textBox3->TabIndex = 8;
			// 
			// label2
			// 
			this->label2->Location = System::Drawing::Point(0, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(100, 23);
			this->label2->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatAppearance->BorderColor = System::Drawing::Color::Bisque;
			this->button1->Font = (gcnew System::Drawing::Font(L"Garamond", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(408, 430);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(177, 59);
			this->button1->TabIndex = 9;
			this->button1->Text = L"Sign In";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &RegisterForm::button1_Click);
			// 
			// RegisterForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Bisque;
			this->ClientSize = System::Drawing::Size(696, 533);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->tbPlants);
			this->Controls->Add(this->tbDate);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->tbPassword);
			this->Controls->Add(this->tbUsername);
			this->Controls->Add(this->label1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"RegisterForm";
			this->Text = L"Planty";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ connString = L"datasource=localhost;port=3306;username=root;password=root";
		MySqlConnection^ conDatabase = gcnew MySqlConnection(connString);
		MySqlCommand^ cmdDatabase = gcnew MySqlCommand("INSERT INTO users.users_data (username, password, plants, date) values('" + this->textBox3->Text + "','" + this->textBox2->Text + "','" + this->tbPlants->Text + "','" + this->tbDate->Text+"');", conDatabase);
		MySqlDataReader^ myReader;
		try {

			conDatabase->Open();
			myReader = cmdDatabase->ExecuteReader();
			this->Hide();
			MainForm^ mainform = gcnew MainForm;
			mainform->ShowDialog();
			while (myReader->Read()) {
			}
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
	};
	};
}
