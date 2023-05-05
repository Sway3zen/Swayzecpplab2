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

	private: System::Windows::Forms::ColorDialog^ colorDialog1;


	private: System::Windows::Forms::FontDialog^ fontDialog1;




	public: char *path;
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ ôàéëToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ çáåğåãòèToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ çáåğåãòèßêToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ â³äêğèòèToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ğåäàãóâàííÿToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ çì³íèòèÊîë³ğToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ çì³íèòèØğèôòToolStripMenuItem;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
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
			this->colorDialog1 = (gcnew System::Windows::Forms::ColorDialog());
			this->fontDialog1 = (gcnew System::Windows::Forms::FontDialog());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->ôàéëToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->çáåğåãòèToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->çáåğåãòèßêToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->â³äêğèòèToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ğåäàãóâàííÿToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->çì³íèòèÊîë³ğToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->çì³íèòèØğèôòToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->ôàéëToolStripMenuItem,
					this->ğåäàãóâàííÿToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(784, 24);
			this->menuStrip1->TabIndex = 6;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// ôàéëToolStripMenuItem
			// 
			this->ôàéëToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->çáåğåãòèToolStripMenuItem,
					this->çáåğåãòèßêToolStripMenuItem, this->â³äêğèòèToolStripMenuItem
			});
			this->ôàéëToolStripMenuItem->ForeColor = System::Drawing::Color::Black;
			this->ôàéëToolStripMenuItem->Name = L"ôàéëToolStripMenuItem";
			this->ôàéëToolStripMenuItem->Size = System::Drawing::Size(48, 20);
			this->ôàéëToolStripMenuItem->Text = L"Ôàéë";
			// 
			// çáåğåãòèToolStripMenuItem
			// 
			this->çáåğåãòèToolStripMenuItem->Name = L"çáåğåãòèToolStripMenuItem";
			this->çáåğåãòèToolStripMenuItem->Size = System::Drawing::Size(139, 22);
			this->çáåğåãòèToolStripMenuItem->Text = L"Çáåğåãòè";
			this->çáåğåãòèToolStripMenuItem->Click += gcnew System::EventHandler(this, &Lab41::çáåğåãòèToolStripMenuItem_Click);
			// 
			// çáåğåãòèßêToolStripMenuItem
			// 
			this->çáåğåãòèßêToolStripMenuItem->Name = L"çáåğåãòèßêToolStripMenuItem";
			this->çáåğåãòèßêToolStripMenuItem->Size = System::Drawing::Size(139, 22);
			this->çáåğåãòèßêToolStripMenuItem->Text = L"Çáåğåãòè ÿê";
			// 
			// â³äêğèòèToolStripMenuItem
			// 
			this->â³äêğèòèToolStripMenuItem->Name = L"â³äêğèòèToolStripMenuItem";
			this->â³äêğèòèToolStripMenuItem->Size = System::Drawing::Size(139, 22);
			this->â³äêğèòèToolStripMenuItem->Text = L"Â³äêğèòè";
			this->â³äêğèòèToolStripMenuItem->Click += gcnew System::EventHandler(this, &Lab41::â³äêğèòèToolStripMenuItem_Click);
			// 
			// ğåäàãóâàííÿToolStripMenuItem
			// 
			this->ğåäàãóâàííÿToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->çì³íèòèÊîë³ğToolStripMenuItem,
					this->çì³íèòèØğèôòToolStripMenuItem
			});
			this->ğåäàãóâàííÿToolStripMenuItem->ForeColor = System::Drawing::Color::Black;
			this->ğåäàãóâàííÿToolStripMenuItem->Name = L"ğåäàãóâàííÿToolStripMenuItem";
			this->ğåäàãóâàííÿToolStripMenuItem->Size = System::Drawing::Size(87, 20);
			this->ğåäàãóâàííÿToolStripMenuItem->Text = L"Ğåäàãóâàííÿ";
			// 
			// çì³íèòèÊîë³ğToolStripMenuItem
			// 
			this->çì³íèòèÊîë³ğToolStripMenuItem->Name = L"çì³íèòèÊîë³ğToolStripMenuItem";
			this->çì³íèòèÊîë³ğToolStripMenuItem->Size = System::Drawing::Size(161, 22);
			this->çì³íèòèÊîë³ğToolStripMenuItem->Text = L"Çì³íèòè êîë³ğ";
			this->çì³íèòèÊîë³ğToolStripMenuItem->Click += gcnew System::EventHandler(this, &Lab41::çì³íèòèÊîë³ğToolStripMenuItem_Click);
			// 
			// çì³íèòèØğèôòToolStripMenuItem
			// 
			this->çì³íèòèØğèôòToolStripMenuItem->Name = L"çì³íèòèØğèôòToolStripMenuItem";
			this->çì³íèòèØğèôòToolStripMenuItem->Size = System::Drawing::Size(161, 22);
			this->çì³íèòèØğèôòToolStripMenuItem->Text = L"Çì³íèòè øğèôò";
			this->çì³íèòèØğèôòToolStripMenuItem->Click += gcnew System::EventHandler(this, &Lab41::çì³íèòèØğèôòToolStripMenuItem_Click);
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(64, 95);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(659, 389);
			this->richTextBox1->TabIndex = 7;
			this->richTextBox1->Text = L"";
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// Lab41
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 19);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)));
			this->ClientSize = System::Drawing::Size(784, 561);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->menuStrip1);
			this->Font = (gcnew System::Drawing::Font(L"Roboto", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ForeColor = System::Drawing::Color::White;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"Lab41";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Lab41";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		
private: System::Void çì³íèòèÊîë³ğToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	ColorDialog^ colorDialog1 = gcnew ColorDialog();
	colorDialog1->AllowFullOpen = true;
	colorDialog1->ShowHelp = true;
	if (colorDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		richTextBox1->ForeColor = colorDialog1->Color;
	}
}
private: System::Void çì³íèòèØğèôòToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	FontDialog^ fontDialog1 = gcnew FontDialog();
	fontDialog1->ShowDialog();
	System::Drawing::Font^ selectedFont = fontDialog1->Font;
	richTextBox1->Font = gcnew System::Drawing::Font(selectedFont->FontFamily, 16, selectedFont->Style);
}
private: System::Void çáåğåãòèToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		richTextBox1->SaveFile(saveFileDialog1->FileName, RichTextBoxStreamType::PlainText);
	}

}
private: System::Void â³äêğèòèToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		richTextBox1->LoadFile(openFileDialog1->FileName,
			RichTextBoxStreamType::PlainText);
	}
	else {
		MessageBox::Show("À õóé çíàº ÷îãî.");
	}

}
};
}
