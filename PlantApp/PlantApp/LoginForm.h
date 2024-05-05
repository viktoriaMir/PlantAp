#pragma once
#include "RegisterForm.h"
#include "MainForm.h"

namespace PlantApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// —водка дл€ LoginForm
	/// </summary>
	public ref class LoginForm : public System::Windows::Forms::Form
	{
	public:
		LoginForm(void)
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
		~LoginForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ TBusername;
	private: System::Windows::Forms::TextBox^ TBpassword;
	protected:


	private: System::Windows::Forms::LinkLabel^ linkLabel1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(LoginForm::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->TBusername = (gcnew System::Windows::Forms::TextBox());
			this->TBpassword = (gcnew System::Windows::Forms::TextBox());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatAppearance->BorderColor = System::Drawing::Color::PeachPuff;
			this->button1->Location = System::Drawing::Point(252, 266);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(144, 50);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Log In";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &LoginForm::button1_Click);
			// 
			// TBusername
			// 
			this->TBusername->Font = (gcnew System::Drawing::Font(L"Segoe Print", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->TBusername->Location = System::Drawing::Point(328, 66);
			this->TBusername->Name = L"TBusername";
			this->TBusername->Size = System::Drawing::Size(234, 39);
			this->TBusername->TabIndex = 1;
			// 
			// TBpassword
			// 
			this->TBpassword->Font = (gcnew System::Drawing::Font(L"Segoe Print", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->TBpassword->Location = System::Drawing::Point(328, 143);
			this->TBpassword->Name = L"TBpassword";
			this->TBpassword->Size = System::Drawing::Size(234, 39);
			this->TBpassword->TabIndex = 2;
			// 
			// linkLabel1
			// 
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->Location = System::Drawing::Point(507, 300);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(115, 16);
			this->linkLabel1->TabIndex = 3;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"Create an account";
			this->linkLabel1->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &LoginForm::linkLabel1_LinkClicked);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe Print", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(108, 62);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(134, 40);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Username";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe Print", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(108, 142);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(127, 40);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Password";
			// 
			// LoginForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::PeachPuff;
			this->ClientSize = System::Drawing::Size(748, 366);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->linkLabel1);
			this->Controls->Add(this->TBpassword);
			this->Controls->Add(this->TBusername);
			this->Controls->Add(this->button1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"LoginForm";
			this->Text = L"Planty";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ connString = L"datasource=localhost;port=3306;username=root;password=root";
		MySqlConnection^ conDatabase = gcnew MySqlConnection(connString);
		MySqlCommand^ cmdDatabase = gcnew MySqlCommand("SELECT * FROM users.users_data WHERE username='"+this->TBusername->Text+"' AND password='"+this->TBpassword->Text+"';", conDatabase);
		MySqlDataReader^ myReader;
		try {

			conDatabase->Open();
			myReader = cmdDatabase->ExecuteReader();
			int count = 0;
			while (myReader->Read()) {
				count += 1;
			}

			if (count == 1) {
				MessageBox::Show("Username and password is correct");
				this->Hide();
				MainForm^ mainform = gcnew MainForm;
				mainform->ShowDialog();
			}
			else if (count > 1) {
				MessageBox::Show("Something Wrong");
			}

		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
		}

	}

private: System::Void linkLabel1_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	this->Hide();
	RegisterForm^ regform = gcnew RegisterForm;
	regform->ShowDialog();
}
};
}
