#include <Windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <msclr/marshal_cppstd.h>

namespace Swayzecpplab2 {
	using namespace System;
	using namespace System::IO;
	using namespace System::Windows::Forms;

	public ref class Form1 : public System::Windows::Forms::Form {
	public:
		Form1() {
			InitializeComponent();
		}

	protected:
		~Form1() {
			if (components) {
				delete components;
			}
		}

	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ newToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ openToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ saveToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ saveAsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ exitToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ editToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ fontToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ colorToolStripMenuItem;
	private: System::Windows::Forms::FontDialog^ fontDialog1;
	private: System::Windows::Forms::ColorDialog^ colorDialog1;
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::ComponentModel::IContainer^ components;

#pragma region Windows Form Designer generated code

		   void InitializeComponent(void) {
			   this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			   this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			   this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			   this->newToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			   this->openToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			   this->saveToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			   this->saveAsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			   this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			   this->editToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			   this->fontToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			   this->colorToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			   this->fontDialog1 = (gcnew System::Windows::Forms::FontDialog());
			   this->colorDialog1 = (gcnew System::Windows::Forms::ColorDialog());
			   this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			   this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			   this->menuStrip1->SuspendLayout();
			   this->SuspendLayout();
			   // 
			   // richTextBox1
			   // 
			   this->richTextBox1->Location = System::Drawing::Point(100, 38);
			   this->richTextBox1->Name = L"richTextBox1";
			   this->richTextBox1->Size = System::Drawing::Size(600, 400);
			   this->richTextBox1->TabIndex = 0;
			   this->richTextBox1->Text = L"";
			   // 
			   // menuStrip1
			   // 
			   this->menuStrip1->BackColor = System::Drawing::Color::White;
			   this->menuStrip1->Font = (gcnew System::Drawing::Font(L"Roboto", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(204)));
			   this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				   this->fileToolStripMenuItem,
					   this->editToolStripMenuItem
			   });
			   this->menuStrip1->Location = System::Drawing::Point(0, 0);
			   this->menuStrip1->Name = L"menuStrip1";
			   this->menuStrip1->Size = System::Drawing::Size(800, 27);
			   this->menuStrip1->TabIndex = 1;
			   this->menuStrip1->Text = L"menuStrip1";
			   // 
			   // fileToolStripMenuItem
			   // 
			   this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				   this->newToolStripMenuItem,
					   this->openToolStripMenuItem, this->saveToolStripMenuItem, this->saveAsToolStripMenuItem, this->exitToolStripMenuItem
			   });
			   this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			   this->fileToolStripMenuItem->Size = System::Drawing::Size(46, 23);
			   this->fileToolStripMenuItem->Text = L"File";
			   // 
			   // newToolStripMenuItem
			   // 
			   this->newToolStripMenuItem->Name = L"newToolStripMenuItem";
			   this->newToolStripMenuItem->Size = System::Drawing::Size(147, 24);
			   this->newToolStripMenuItem->Text = L"New";
			   this->newToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::newToolStripMenuItem_Click);
			   // 
			   // openToolStripMenuItem
			   // 
			   this->openToolStripMenuItem->Name = L"openToolStripMenuItem";
			   this->openToolStripMenuItem->Size = System::Drawing::Size(147, 24);
			   this->openToolStripMenuItem->Text = L"Open";
			   this->openToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::openToolStripMenuItem_Click);
			   // 
			   // saveToolStripMenuItem
			   // 
			   this->saveToolStripMenuItem->Name = L"saveToolStripMenuItem";
			   this->saveToolStripMenuItem->Size = System::Drawing::Size(147, 24);
			   this->saveToolStripMenuItem->Text = L"Save";
			   this->saveToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::saveToolStripMenuItem_Click);
			   // 
			   // saveAsToolStripMenuItem
			   // 
			   this->saveAsToolStripMenuItem->Name = L"saveAsToolStripMenuItem";
			   this->saveAsToolStripMenuItem->Size = System::Drawing::Size(147, 24);
			   this->saveAsToolStripMenuItem->Text = L"Save As...";
			   this->saveAsToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::saveAsToolStripMenuItem_Click);
			   // 
			   // exitToolStripMenuItem
			   // 
			   this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			   this->exitToolStripMenuItem->Size = System::Drawing::Size(147, 24);
			   this->exitToolStripMenuItem->Text = L"Exit";
			   this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::exitToolStripMenuItem_Click);
			   // 
			   // editToolStripMenuItem
			   // 
			   this->editToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				   this->fontToolStripMenuItem,
					   this->colorToolStripMenuItem
			   });
			   this->editToolStripMenuItem->Name = L"editToolStripMenuItem";
			   this->editToolStripMenuItem->Size = System::Drawing::Size(48, 23);
			   this->editToolStripMenuItem->Text = L"Edit";
			   // 
			   // fontToolStripMenuItem
			   // 
			   this->fontToolStripMenuItem->Name = L"fontToolStripMenuItem";
			   this->fontToolStripMenuItem->Size = System::Drawing::Size(115, 24);
			   this->fontToolStripMenuItem->Text = L"Font";
			   this->fontToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::fontToolStripMenuItem_Click);
			   // 
			   // colorToolStripMenuItem
			   // 
			   this->colorToolStripMenuItem->Name = L"colorToolStripMenuItem";
			   this->colorToolStripMenuItem->Size = System::Drawing::Size(115, 24);
			   this->colorToolStripMenuItem->Text = L"Color";
			   this->colorToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::colorToolStripMenuItem_Click);
			   // 
			   // fontDialog1
			   // 
			   this->fontDialog1->AllowScriptChange = false;
			   this->fontDialog1->AllowSimulations = false;
			   this->fontDialog1->Apply += gcnew System::EventHandler(this, &Form1::fontDialog1_Apply);
			   // 
			   // colorDialog1
			   // 
			   this->colorDialog1->AnyColor = true;
			   this->colorDialog1->FullOpen = true;
			   this->colorDialog1->SolidColorOnly = true;
			   // 
			   // openFileDialog1
			   // 
			   this->openFileDialog1->FileName = L"openFileDialog1";
			   // 
			   // Form1
			   // 
			   this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			   this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				   static_cast<System::Int32>(static_cast<System::Byte>(40)));
			   this->ClientSize = System::Drawing::Size(800, 450);
			   this->Controls->Add(this->richTextBox1);
			   this->Controls->Add(this->menuStrip1);
			   this->MainMenuStrip = this->menuStrip1;
			   this->Name = L"Form1";
			   this->Text = L"Notepad";
			   this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			   this->menuStrip1->ResumeLayout(false);
			   this->menuStrip1->PerformLayout();
			   this->ResumeLayout(false);
			   this->PerformLayout();

		   }
#pragma endregion
	private: System::Void newToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		this->richTextBox1->Clear();
	}
	private: System::Void openToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK &&
			this->openFileDialog1->FileName->Length > 0) {
			this->richTextBox1->LoadFile(this->openFileDialog1->FileName,
				System::Windows::Forms::RichTextBoxStreamType::PlainText);
		}
	}
	private: System::Void saveToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK &&
			this->saveFileDialog1->FileName->Length > 0) {
			this->richTextBox1->SaveFile(this->saveFileDialog1->FileName,
				System::Windows::Forms::RichTextBoxStreamType::PlainText);
		}
	}
	private: System::Void saveAsToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK &&
			this->saveFileDialog1->FileName->Length > 0) {
			this->richTextBox1->SaveFile(this->saveFileDialog1->FileName,
				System::Windows::Forms::RichTextBoxStreamType::PlainText);
		}
	}

	private: System::Void exitToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}

	private: System::Void fontToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->fontDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			this->richTextBox1->Font = this->fontDialog1->Font;
		}
	}

	private: System::Void colorToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->colorDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			this->richTextBox1->SelectionColor = this->colorDialog1->Color;
		}
	}

	private: System::Void fontDialog1_Apply(System::Object^ sender, System::EventArgs^ e) {
		this->richTextBox1->Font = this->fontDialog1->Font;
	}

	private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
		this->richTextBox1->Font = gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10);
	}
	};
}