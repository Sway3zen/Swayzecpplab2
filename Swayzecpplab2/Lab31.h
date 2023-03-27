#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <Windows.h>

#pragma once

namespace Swayzecpplab2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Lab31
	/// </summary>
	public ref class Lab31 : public System::Windows::Forms::Form
	{
	public:
		Lab31(void)
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
		~Lab31()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ Xa;
	private: System::Windows::Forms::TextBox^ Ya;
	private: System::Windows::Forms::TextBox^ Yc;

	protected:

	protected:


	private: System::Windows::Forms::TextBox^ Xc;

	private: System::Windows::Forms::TextBox^ Yb;

	private: System::Windows::Forms::TextBox^ Xb;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::RadioButton^ task1;
	private: System::Windows::Forms::RadioButton^ task2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ YX;


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->Xa = (gcnew System::Windows::Forms::TextBox());
			this->Ya = (gcnew System::Windows::Forms::TextBox());
			this->Yc = (gcnew System::Windows::Forms::TextBox());
			this->Xc = (gcnew System::Windows::Forms::TextBox());
			this->Yb = (gcnew System::Windows::Forms::TextBox());
			this->Xb = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->task1 = (gcnew System::Windows::Forms::RadioButton());
			this->task2 = (gcnew System::Windows::Forms::RadioButton());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->YX = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// Xa
			// 
			this->Xa->Location = System::Drawing::Point(51, 64);
			this->Xa->Name = L"Xa";
			this->Xa->Size = System::Drawing::Size(100, 20);
			this->Xa->TabIndex = 0;
			this->Xa->Text = L"Enter A(x)";
			// 
			// Ya
			// 
			this->Ya->Location = System::Drawing::Point(224, 64);
			this->Ya->Name = L"Ya";
			this->Ya->Size = System::Drawing::Size(100, 20);
			this->Ya->TabIndex = 1;
			this->Ya->Text = L"Enter A(y)";
			// 
			// Yc
			// 
			this->Yc->Location = System::Drawing::Point(224, 156);
			this->Yc->Name = L"Yc";
			this->Yc->Size = System::Drawing::Size(100, 20);
			this->Yc->TabIndex = 3;
			this->Yc->Text = L"Enter C(y)";
			// 
			// Xc
			// 
			this->Xc->Location = System::Drawing::Point(51, 156);
			this->Xc->Name = L"Xc";
			this->Xc->Size = System::Drawing::Size(100, 20);
			this->Xc->TabIndex = 2;
			this->Xc->Text = L"Enter C(x)";
			// 
			// Yb
			// 
			this->Yb->Location = System::Drawing::Point(224, 113);
			this->Yb->Name = L"Yb";
			this->Yb->Size = System::Drawing::Size(100, 20);
			this->Yb->TabIndex = 5;
			this->Yb->Text = L"Enter B(y)";
			// 
			// Xb
			// 
			this->Xb->Location = System::Drawing::Point(51, 113);
			this->Xb->Name = L"Xb";
			this->Xb->Size = System::Drawing::Size(100, 20);
			this->Xb->TabIndex = 4;
			this->Xb->Text = L"Enter B(x)";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::White;
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button1->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 10.25F));
			this->button1->Location = System::Drawing::Point(150, 238);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Result";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Lab31::button1_Click);
			// 
			// task1
			// 
			this->task1->AutoSize = true;
			this->task1->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->task1->ForeColor = System::Drawing::Color::White;
			this->task1->Location = System::Drawing::Point(78, 182);
			this->task1->Name = L"task1";
			this->task1->Size = System::Drawing::Size(226, 22);
			this->task1->TabIndex = 8;
			this->task1->Text = L"Тангенс альфа; бісектриса бетта";
			this->task1->UseVisualStyleBackColor = true;
			this->task1->CheckedChanged += gcnew System::EventHandler(this, &Lab31::task1_CheckedChanged);
			// 
			// task2
			// 
			this->task2->AutoSize = true;
			this->task2->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->task2->ForeColor = System::Drawing::Color::White;
			this->task2->Location = System::Drawing::Point(78, 210);
			this->task2->Name = L"task2";
			this->task2->Size = System::Drawing::Size(148, 22);
			this->task2->TabIndex = 9;
			this->task2->Text = L"Вирахувати функцію";
			this->task2->UseVisualStyleBackColor = true;
			this->task2->CheckedChanged += gcnew System::EventHandler(this, &Lab31::task2_CheckedChanged);
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Verdana", 12.25F));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(1, 304);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(382, 20);
			this->label1->TabIndex = 10;
			this->label1->Text = L"label1";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label1->Visible = false;
			// 
			// YX
			// 
			this->YX->Location = System::Drawing::Point(141, 21);
			this->YX->Name = L"YX";
			this->YX->Size = System::Drawing::Size(100, 20);
			this->YX->TabIndex = 11;
			this->YX->Text = L"Enter X";
			this->YX->Visible = false;
			// 
			// Lab31
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)));
			this->ClientSize = System::Drawing::Size(384, 461);
			this->Controls->Add(this->YX);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->task2);
			this->Controls->Add(this->task1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->Yb);
			this->Controls->Add(this->Xb);
			this->Controls->Add(this->Yc);
			this->Controls->Add(this->Xc);
			this->Controls->Add(this->Ya);
			this->Controls->Add(this->Xa);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"Lab31";
			this->ShowIcon = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"Lab31";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		array<TextBox^>^ textBoxes = { Xa, Xb, Xc, Ya, Yb, Yc };
		for (int i = 0; i < textBoxes->Length; i++) {
			int value;
			if (!int::TryParse(textBoxes[i]->Text, value)) {

				break;
			}
			else {
			}
		}

		int valueXa = System::Convert::ToInt32(Xa->Text);
		int valueYa = System::Convert::ToInt32(Ya->Text);
		int valueXb = System::Convert::ToInt32(Xb->Text);
		int valueYb = System::Convert::ToInt32(Yb->Text);
		int valueXc = System::Convert::ToInt32(Xc->Text);
		int valueYc = System::Convert::ToInt32(Yc->Text);

		float a = sqrt(pow(valueXb - valueXa, 2) + pow(valueYb - valueYa, 2));
		float b = sqrt(pow(valueXc - valueXb, 2) + pow(valueYc - valueYb, 2));
		float c = sqrt(pow(valueXc - valueXa, 2) + pow(valueYc - valueYa, 2));

		if (task1->Checked == true) {
			float tanA = (b / c);
			label1->Text = "Відповідь: " + Convert::ToString(tanA);
			label1->Visible = TRUE;
		}

		if (task2->Checked == true) {
			float value;
			float y;
			bool isNumber = float::TryParse(YX->Text, value);
			if (isNumber) {
				int valueX = System::Convert::ToInt32(YX->Text);
				if (valueX == valueXc) {
					label1->Text = "Відповідь: " + Convert::ToString(valueYc);
				}
				else if (valueXb <= valueX && valueX <= valueXc) {
					label1->Text = "Відповідь: " + Convert::ToString(valueYb+((valueX-valueXa)/valueXc-valueXa)*(valueYb+valueYa));
				}
				else if (valueXa <= valueX && valueX <= valueXb) {
					label1->Text = "Відповідь: " + Convert::ToString(valueYa+((valueX-valueXa)/valueXb-valueXa)*(valueYb-valueYc));
				}
				else {
					label1->Text = "Відповідь: " + Convert::ToString(0);
				}
			}
			else {
				
			}
		}
	};
	private: System::Void task2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
			YX->Visible = 1;
	}
private: System::Void task1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
			YX->Visible = 0;

	}
};
}