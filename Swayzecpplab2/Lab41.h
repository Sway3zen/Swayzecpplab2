#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <Windows.h>
#include <Commdlg.h>

#pragma once

namespace Swayzecpplab2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Lab41
	/// </summary>
	public ref class Lab41 : public System::Windows::Forms::Form
	{
	public:
		Lab41(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Lab41()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::ColorDialog^ colorDialog1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::FontDialog^ fontDialog1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;

	public: char *path;
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;
	public:

	public:


	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->colorDialog1 = (gcnew System::Windows::Forms::ColorDialog());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->fontDialog1 = (gcnew System::Windows::Forms::FontDialog());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(275, 100);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(250, 100);
			this->textBox1->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->AutoSize = true;
			this->button1->ForeColor = System::Drawing::Color::Black;
			this->button1->Location = System::Drawing::Point(338, 222);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(124, 29);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Змінити колір";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Lab41::button1_Click);
			// 
			// button2
			// 
			this->button2->AutoSize = true;
			this->button2->ForeColor = System::Drawing::Color::Black;
			this->button2->Location = System::Drawing::Point(333, 257);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(134, 29);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Змінити шрифт";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Lab41::button2_Click);
			// 
			// button3
			// 
			this->button3->AutoSize = true;
			this->button3->ForeColor = System::Drawing::Color::Black;
			this->button3->Location = System::Drawing::Point(275, 292);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(87, 29);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Зберегти";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Lab41::button3_Click);
			// 
			// button4
			// 
			this->button4->AutoSize = true;
			this->button4->ForeColor = System::Drawing::Color::Black;
			this->button4->Location = System::Drawing::Point(438, 292);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(87, 29);
			this->button4->TabIndex = 4;
			this->button4->Text = L"Відкрити";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// button5
			// 
			this->button5->AutoSize = true;
			this->button5->ForeColor = System::Drawing::Color::Black;
			this->button5->Location = System::Drawing::Point(345, 327);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(109, 29);
			this->button5->TabIndex = 5;
			this->button5->Text = L"Зберегти як";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// Lab41
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 19);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)));
			this->ClientSize = System::Drawing::Size(784, 561);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Font = (gcnew System::Drawing::Font(L"Roboto", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ForeColor = System::Drawing::Color::White;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"Lab41";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Lab41";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		ColorDialog^ colorDialog1 = gcnew ColorDialog();
		colorDialog1->AllowFullOpen = true;
		colorDialog1->ShowHelp = true;
		colorDialog1->Color = button1->BackColor;
		if (colorDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			textBox1->ForeColor = colorDialog1->Color;
		}
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		FontDialog^ fontDialog1 = gcnew FontDialog();
		fontDialog1->ShowDialog();
		System::Drawing::Font^ selectedFont = fontDialog1->Font;
		textBox1->Font = gcnew System::Drawing::Font(selectedFont->FontFamily, 16, selectedFont->Style);
	}

	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		SaveFileDialog^ savefile = gcnew SaveFileDialog();
	 savefile->Filter = "Text Files (*.txt)|*.txt|All Files (*.*)|*.*";
	 savefile->FilterIndex = 1;
	 savefile->Title = "Save a Text File";
	 savefile->RestoreDirectory = true;
	 if (savefile->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		 String^ selectedFile = savefile->FileName;
	 }

		/*SaveFileDialog^ saveFileDialog1 = gcnew SaveFileDialog();
		saveFileDialog1->Filter = "TEXT|*.txt";
		saveFileDialog1->Title = "Save a File";
		saveFileDialog1->ShowDialog();*/

	}
		
};
}
