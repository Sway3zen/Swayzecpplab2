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
	private: System::Windows::Forms::ToolStripMenuItem^ Ù‡ÈÎToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ Á·ÂÂ„ÚËToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ Á·ÂÂ„ÚËﬂÍToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ‚≥‰ÍËÚËToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ Â‰‡„Û‚‡ÌÌˇToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ÁÏ≥ÌËÚË ÓÎ≥ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ÁÏ≥ÌËÚËÿËÙÚToolStripMenuItem;
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
			this->Ù‡ÈÎToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->Á·ÂÂ„ÚËToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->Á·ÂÂ„ÚËﬂÍToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->‚≥‰ÍËÚËToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->Â‰‡„Û‚‡ÌÌˇToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ÁÏ≥ÌËÚË ÓÎ≥ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ÁÏ≥ÌËÚËÿËÙÚToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->Ù‡ÈÎToolStripMenuItem,
					this->Â‰‡„Û‚‡ÌÌˇToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(784, 24);
			this->menuStrip1->TabIndex = 6;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// Ù‡ÈÎToolStripMenuItem
			// 
			this->Ù‡ÈÎToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->Á·ÂÂ„ÚËToolStripMenuItem,
					this->Á·ÂÂ„ÚËﬂÍToolStripMenuItem, this->‚≥‰ÍËÚËToolStripMenuItem
			});
			this->Ù‡ÈÎToolStripMenuItem->ForeColor = System::Drawing::Color::Black;
			this->Ù‡ÈÎToolStripMenuItem->Name = L"Ù‡ÈÎToolStripMenuItem";
			this->Ù‡ÈÎToolStripMenuItem->Size = System::Drawing::Size(48, 20);
			this->Ù‡ÈÎToolStripMenuItem->Text = L"‘‡ÈÎ";
			// 
			// Á·ÂÂ„ÚËToolStripMenuItem
			// 
			this->Á·ÂÂ„ÚËToolStripMenuItem->Name = L"Á·ÂÂ„ÚËToolStripMenuItem";
			this->Á·ÂÂ„ÚËToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->Á·ÂÂ„ÚËToolStripMenuItem->Text = L"«·ÂÂ„ÚË";
			this->Á·ÂÂ„ÚËToolStripMenuItem->Click += gcnew System::EventHandler(this, &Lab41::Á·ÂÂ„ÚËToolStripMenuItem_Click);
			// 
			// Á·ÂÂ„ÚËﬂÍToolStripMenuItem
			// 
			this->Á·ÂÂ„ÚËﬂÍToolStripMenuItem->Name = L"Á·ÂÂ„ÚËﬂÍToolStripMenuItem";
			this->Á·ÂÂ„ÚËﬂÍToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->Á·ÂÂ„ÚËﬂÍToolStripMenuItem->Text = L"«·ÂÂ„ÚË ˇÍ";
			// 
			// ‚≥‰ÍËÚËToolStripMenuItem
			// 
			this->‚≥‰ÍËÚËToolStripMenuItem->Name = L"‚≥‰ÍËÚËToolStripMenuItem";
			this->‚≥‰ÍËÚËToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->‚≥‰ÍËÚËToolStripMenuItem->Text = L"¬≥‰ÍËÚË";
			this->‚≥‰ÍËÚËToolStripMenuItem->Click += gcnew System::EventHandler(this, &Lab41::‚≥‰ÍËÚËToolStripMenuItem_Click);
			// 
			// Â‰‡„Û‚‡ÌÌˇToolStripMenuItem
			// 
			this->Â‰‡„Û‚‡ÌÌˇToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->ÁÏ≥ÌËÚË ÓÎ≥ToolStripMenuItem,
					this->ÁÏ≥ÌËÚËÿËÙÚToolStripMenuItem
			});
			this->Â‰‡„Û‚‡ÌÌˇToolStripMenuItem->ForeColor = System::Drawing::Color::Black;
			this->Â‰‡„Û‚‡ÌÌˇToolStripMenuItem->Name = L"Â‰‡„Û‚‡ÌÌˇToolStripMenuItem";
			this->Â‰‡„Û‚‡ÌÌˇToolStripMenuItem->Size = System::Drawing::Size(87, 20);
			this->Â‰‡„Û‚‡ÌÌˇToolStripMenuItem->Text = L"–Â‰‡„Û‚‡ÌÌˇ";
			// 
			// ÁÏ≥ÌËÚË ÓÎ≥ToolStripMenuItem
			// 
			this->ÁÏ≥ÌËÚË ÓÎ≥ToolStripMenuItem->Name = L"ÁÏ≥ÌËÚË ÓÎ≥ToolStripMenuItem";
			this->ÁÏ≥ÌËÚË ÓÎ≥ToolStripMenuItem->Size = System::Drawing::Size(161, 22);
			this->ÁÏ≥ÌËÚË ÓÎ≥ToolStripMenuItem->Text = L"«Ï≥ÌËÚË ÍÓÎ≥";
			this->ÁÏ≥ÌËÚË ÓÎ≥ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Lab41::ÁÏ≥ÌËÚË ÓÎ≥ToolStripMenuItem_Click);
			// 
			// ÁÏ≥ÌËÚËÿËÙÚToolStripMenuItem
			// 
			this->ÁÏ≥ÌËÚËÿËÙÚToolStripMenuItem->Name = L"ÁÏ≥ÌËÚËÿËÙÚToolStripMenuItem";
			this->ÁÏ≥ÌËÚËÿËÙÚToolStripMenuItem->Size = System::Drawing::Size(161, 22);
			this->ÁÏ≥ÌËÚËÿËÙÚToolStripMenuItem->Text = L"«Ï≥ÌËÚË ¯ËÙÚ";
			this->ÁÏ≥ÌËÚËÿËÙÚToolStripMenuItem->Click += gcnew System::EventHandler(this, &Lab41::ÁÏ≥ÌËÚËÿËÙÚToolStripMenuItem_Click);
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
		
private: System::Void ÁÏ≥ÌËÚË ÓÎ≥ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	ColorDialog^ colorDialog1 = gcnew ColorDialog();
	colorDialog1->AllowFullOpen = true;
	colorDialog1->ShowHelp = true;
	if (colorDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		richTextBox1->ForeColor = colorDialog1->Color;
	}
}
private: System::Void ÁÏ≥ÌËÚËÿËÙÚToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	FontDialog^ fontDialog1 = gcnew FontDialog();
	fontDialog1->ShowDialog();
	System::Drawing::Font^ selectedFont = fontDialog1->Font;
	richTextBox1->Font = gcnew System::Drawing::Font(selectedFont->FontFamily, 16, selectedFont->Style);
}
private: System::Void Á·ÂÂ„ÚËToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		richTextBox1->SaveFile(saveFileDialog1->FileName, RichTextBoxStreamType::PlainText);
	}
}
private: System::Void ‚≥‰ÍËÚËToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		richTextBox1->LoadFile(openFileDialog1->FileName,
			RichTextBoxStreamType::PlainText);
	}

}
};
}
