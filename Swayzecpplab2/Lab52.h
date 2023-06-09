#pragma once
#include <stdlib.h>
#include <stdio.h>
#include <direct.h>

namespace Swayzecpplab2 {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	struct Drawing_list
	{
		int figure;
		int x1, y1, x2, y2;
		struct Drawing_list* next;
	};
	public ref class Lab52 : public System::Windows::Forms::Form
	{
	public:
		Lab52(void)
		{
			InitializeComponent();
		}
	protected:
		~Lab52()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	protected:
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;
	private: System::Windows::Forms::ToolStripMenuItem^ fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ newToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ saveToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ saveAsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ editToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ endoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ redoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ changeColorToolStripMenuItem;
	private: System::Windows::Forms::RadioButton^ radioButton3;
	private: System::Windows::Forms::RadioButton^ radioButton4;
	private: System::Windows::Forms::RadioButton^ radioButton5;
	private: System::Windows::Forms::RadioButton^ radioButton6;
	private: System::Windows::Forms::ColorDialog^ colorDialog1;
	private: System::Windows::Forms::ToolStripMenuItem^ openToolStripMenuItem;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::RadioButton^ radioButton7;
	private: System::Windows::Forms::RadioButton^ radioButton8;
	private: System::Windows::Forms::RadioButton^ radioButton9;
	private: System::Windows::Forms::RadioButton^ radioButton10;
	private: System::Windows::Forms::RadioButton^ radioButton11;
	private:
		System::ComponentModel::Container^ components;
#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->newToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saveToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saveAsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->editToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->endoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->redoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->changeColorToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton5 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton6 = (gcnew System::Windows::Forms::RadioButton());
			this->colorDialog1 = (gcnew System::Windows::Forms::ColorDialog());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->radioButton7 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton8 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton9 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton10 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton11 = (gcnew System::Windows::Forms::RadioButton());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::White;
			this->pictureBox1->Dock = System::Windows::Forms::DockStyle::Right;
			this->pictureBox1->Location = System::Drawing::Point(107, 24);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(677, 537);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Lab52::pictureBox1_MouseDown_1);
			this->pictureBox1->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &Lab52::pictureBox1_MouseUp);
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->BackColor = System::Drawing::Color::Transparent;
			this->radioButton1->Checked = true;
			this->radioButton1->ForeColor = System::Drawing::Color::White;
			this->radioButton1->Location = System::Drawing::Point(9, 26);
			this->radioButton1->Margin = System::Windows::Forms::Padding(2);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(45, 17);
			this->radioButton1->TabIndex = 1;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Line";
			this->radioButton1->UseVisualStyleBackColor = false;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->BackColor = System::Drawing::Color::Transparent;
			this->radioButton2->ForeColor = System::Drawing::Color::White;
			this->radioButton2->Location = System::Drawing::Point(9, 56);
			this->radioButton2->Margin = System::Windows::Forms::Padding(2);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(49, 17);
			this->radioButton2->TabIndex = 2;
			this->radioButton2->Text = L"Ellips";
			this->radioButton2->UseVisualStyleBackColor = false;
			// 
			// button1
			// 
			this->button1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->button1->AutoSize = true;
			this->button1->BackColor = System::Drawing::Color::White;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Location = System::Drawing::Point(9, 515);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(83, 35);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Clear";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Lab52::button1_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::Color::White;
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->fileToolStripMenuItem,
					this->editToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Padding = System::Windows::Forms::Padding(4, 2, 0, 2);
			this->menuStrip1->Size = System::Drawing::Size(784, 24);
			this->menuStrip1->TabIndex = 4;
			this->menuStrip1->Text = L"menuStrip1";
			this->menuStrip1->ItemClicked += gcnew System::Windows::Forms::ToolStripItemClickedEventHandler(this, &Lab52::menuStrip1_ItemClicked);
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->newToolStripMenuItem,
					this->openToolStripMenuItem, this->saveToolStripMenuItem, this->saveAsToolStripMenuItem
			});
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(37, 20);
			this->fileToolStripMenuItem->Text = L"File";
			// 
			// newToolStripMenuItem
			// 
			this->newToolStripMenuItem->Name = L"newToolStripMenuItem";
			this->newToolStripMenuItem->Size = System::Drawing::Size(112, 22);
			this->newToolStripMenuItem->Text = L"New";
			this->newToolStripMenuItem->Click += gcnew System::EventHandler(this, &Lab52::newToolStripMenuItem_Click);
			// 
			// openToolStripMenuItem
			// 
			this->openToolStripMenuItem->Name = L"openToolStripMenuItem";
			this->openToolStripMenuItem->Size = System::Drawing::Size(112, 22);
			this->openToolStripMenuItem->Text = L"Open";
			this->openToolStripMenuItem->Click += gcnew System::EventHandler(this, &Lab52::openToolStripMenuItem_Click);
			// 
			// saveToolStripMenuItem
			// 
			this->saveToolStripMenuItem->Name = L"saveToolStripMenuItem";
			this->saveToolStripMenuItem->Size = System::Drawing::Size(112, 22);
			this->saveToolStripMenuItem->Text = L"Save";
			this->saveToolStripMenuItem->Click += gcnew System::EventHandler(this, &Lab52::saveToolStripMenuItem_Click);
			// 
			// saveAsToolStripMenuItem
			// 
			this->saveAsToolStripMenuItem->Name = L"saveAsToolStripMenuItem";
			this->saveAsToolStripMenuItem->Size = System::Drawing::Size(112, 22);
			this->saveAsToolStripMenuItem->Text = L"Save as";
			this->saveAsToolStripMenuItem->Click += gcnew System::EventHandler(this, &Lab52::saveAsToolStripMenuItem_Click);
			// 
			// editToolStripMenuItem
			// 
			this->editToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->endoToolStripMenuItem,
					this->redoToolStripMenuItem, this->changeColorToolStripMenuItem
			});
			this->editToolStripMenuItem->Name = L"editToolStripMenuItem";
			this->editToolStripMenuItem->Size = System::Drawing::Size(39, 20);
			this->editToolStripMenuItem->Text = L"Edit";
			// 
			// endoToolStripMenuItem
			// 
			this->endoToolStripMenuItem->Name = L"endoToolStripMenuItem";
			this->endoToolStripMenuItem->Size = System::Drawing::Size(145, 22);
			this->endoToolStripMenuItem->Text = L"Undo";
			this->endoToolStripMenuItem->Click += gcnew System::EventHandler(this, &Lab52::endoToolStripMenuItem_Click);
			// 
			// redoToolStripMenuItem
			// 
			this->redoToolStripMenuItem->Name = L"redoToolStripMenuItem";
			this->redoToolStripMenuItem->Size = System::Drawing::Size(145, 22);
			this->redoToolStripMenuItem->Text = L"Redo";
			this->redoToolStripMenuItem->Click += gcnew System::EventHandler(this, &Lab52::redoToolStripMenuItem_Click);
			// 
			// changeColorToolStripMenuItem
			// 
			this->changeColorToolStripMenuItem->Name = L"changeColorToolStripMenuItem";
			this->changeColorToolStripMenuItem->Size = System::Drawing::Size(145, 22);
			this->changeColorToolStripMenuItem->Text = L"Change color";
			this->changeColorToolStripMenuItem->Click += gcnew System::EventHandler(this, &Lab52::changeColorToolStripMenuItem_Click);
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->BackColor = System::Drawing::Color::Transparent;
			this->radioButton3->ForeColor = System::Drawing::Color::White;
			this->radioButton3->Location = System::Drawing::Point(9, 86);
			this->radioButton3->Margin = System::Windows::Forms::Padding(2);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(59, 17);
			this->radioButton3->TabIndex = 5;
			this->radioButton3->Text = L"Square";
			this->radioButton3->UseVisualStyleBackColor = false;
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->BackColor = System::Drawing::Color::Transparent;
			this->radioButton4->ForeColor = System::Drawing::Color::White;
			this->radioButton4->Location = System::Drawing::Point(9, 118);
			this->radioButton4->Margin = System::Windows::Forms::Padding(2);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(63, 17);
			this->radioButton4->TabIndex = 6;
			this->radioButton4->Text = L"Triangle";
			this->radioButton4->UseVisualStyleBackColor = false;
			// 
			// radioButton5
			// 
			this->radioButton5->AutoSize = true;
			this->radioButton5->BackColor = System::Drawing::Color::Transparent;
			this->radioButton5->ForeColor = System::Drawing::Color::White;
			this->radioButton5->Location = System::Drawing::Point(9, 151);
			this->radioButton5->Margin = System::Windows::Forms::Padding(2);
			this->radioButton5->Name = L"radioButton5";
			this->radioButton5->Size = System::Drawing::Size(74, 17);
			this->radioButton5->TabIndex = 7;
			this->radioButton5->Text = L"Rectangle";
			this->radioButton5->UseVisualStyleBackColor = false;
			// 
			// radioButton6
			// 
			this->radioButton6->AutoSize = true;
			this->radioButton6->BackColor = System::Drawing::Color::Transparent;
			this->radioButton6->ForeColor = System::Drawing::Color::White;
			this->radioButton6->Location = System::Drawing::Point(9, 184);
			this->radioButton6->Margin = System::Windows::Forms::Padding(2);
			this->radioButton6->Name = L"radioButton6";
			this->radioButton6->Size = System::Drawing::Size(51, 17);
			this->radioButton6->TabIndex = 8;
			this->radioButton6->Text = L"Circle";
			this->radioButton6->UseVisualStyleBackColor = false;
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(718, 4);
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(54, 20);
			this->numericUpDown1->TabIndex = 9;
			this->numericUpDown1->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown1->ValueChanged += gcnew System::EventHandler(this, &Lab52::numericUpDown1_ValueChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::White;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(619, 6);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(93, 16);
			this->label1->TabIndex = 10;
			this->label1->Text = L"������� ����";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"������", L"���������" });
			this->comboBox1->Location = System::Drawing::Point(492, 3);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 21);
			this->comboBox1->TabIndex = 11;
			this->comboBox1->Text = L"������";
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Lab52::comboBox1_SelectedIndexChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::White;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::Color::Black;
			this->label2->Location = System::Drawing::Point(426, 6);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(60, 16);
			this->label2->TabIndex = 12;
			this->label2->Text = L"��� ����";
			// 
			// radioButton7
			// 
			this->radioButton7->AutoSize = true;
			this->radioButton7->BackColor = System::Drawing::Color::Transparent;
			this->radioButton7->ForeColor = System::Drawing::Color::White;
			this->radioButton7->Location = System::Drawing::Point(9, 474);
			this->radioButton7->Margin = System::Windows::Forms::Padding(2);
			this->radioButton7->Name = L"radioButton7";
			this->radioButton7->Size = System::Drawing::Size(49, 17);
			this->radioButton7->TabIndex = 13;
			this->radioButton7->Text = L"Ellips";
			this->radioButton7->UseVisualStyleBackColor = false;
			this->radioButton7->CheckedChanged += gcnew System::EventHandler(this, &Lab52::radioButton7_CheckedChanged);
			// 
			// radioButton8
			// 
			this->radioButton8->AutoSize = true;
			this->radioButton8->BackColor = System::Drawing::Color::Transparent;
			this->radioButton8->ForeColor = System::Drawing::Color::White;
			this->radioButton8->Location = System::Drawing::Point(9, 453);
			this->radioButton8->Margin = System::Windows::Forms::Padding(2);
			this->radioButton8->Name = L"radioButton8";
			this->radioButton8->Size = System::Drawing::Size(74, 17);
			this->radioButton8->TabIndex = 14;
			this->radioButton8->Text = L"Rectangle";
			this->radioButton8->UseVisualStyleBackColor = false;
			// 
			// radioButton9
			// 
			this->radioButton9->AutoSize = true;
			this->radioButton9->BackColor = System::Drawing::Color::Transparent;
			this->radioButton9->ForeColor = System::Drawing::Color::White;
			this->radioButton9->Location = System::Drawing::Point(9, 432);
			this->radioButton9->Margin = System::Windows::Forms::Padding(2);
			this->radioButton9->Name = L"radioButton9";
			this->radioButton9->Size = System::Drawing::Size(59, 17);
			this->radioButton9->TabIndex = 15;
			this->radioButton9->Text = L"Square";
			this->radioButton9->UseVisualStyleBackColor = false;
			// 
			// radioButton10
			// 
			this->radioButton10->AutoSize = true;
			this->radioButton10->BackColor = System::Drawing::Color::Transparent;
			this->radioButton10->ForeColor = System::Drawing::Color::White;
			this->radioButton10->Location = System::Drawing::Point(9, 411);
			this->radioButton10->Margin = System::Windows::Forms::Padding(2);
			this->radioButton10->Name = L"radioButton10";
			this->radioButton10->Size = System::Drawing::Size(63, 17);
			this->radioButton10->TabIndex = 16;
			this->radioButton10->Text = L"Triangle";
			this->radioButton10->UseVisualStyleBackColor = false;
			// 
			// radioButton11
			// 
			this->radioButton11->AutoSize = true;
			this->radioButton11->BackColor = System::Drawing::Color::Transparent;
			this->radioButton11->ForeColor = System::Drawing::Color::White;
			this->radioButton11->Location = System::Drawing::Point(9, 390);
			this->radioButton11->Margin = System::Windows::Forms::Padding(2);
			this->radioButton11->Name = L"radioButton11";
			this->radioButton11->Size = System::Drawing::Size(51, 17);
			this->radioButton11->TabIndex = 17;
			this->radioButton11->Text = L"Circle";
			this->radioButton11->UseVisualStyleBackColor = false;
			// 
			// Lab52
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)));
			this->ClientSize = System::Drawing::Size(784, 561);
			this->Controls->Add(this->radioButton11);
			this->Controls->Add(this->radioButton10);
			this->Controls->Add(this->radioButton9);
			this->Controls->Add(this->radioButton8);
			this->Controls->Add(this->radioButton7);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->numericUpDown1);
			this->Controls->Add(this->radioButton6);
			this->Controls->Add(this->radioButton5);
			this->Controls->Add(this->radioButton4);
			this->Controls->Add(this->radioButton3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(2);
			this->MaximizeBox = false;
			this->Name = L"Lab52";
			this->ShowIcon = false;
			this->Text = L"Paint";
			this->Load += gcnew System::EventHandler(this, &Lab52::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		Pen^ MyPen;
		Graphics^ MyGraphic;
		Bitmap^ bmp;
		int x1, y1;
		int width;
		int height;
		bool Draw_ = false;
		TextBox^ textBox1;
		TextBox^ textBox2;
		Form^ form1;
		Drawing_list* head = NULL;

		System::Drawing::Color color = Color::Black;

		void CreateNode(int figure, int x1, int y1, int x2, int y2)
		{
			if (head == NULL)
			{
				head = (Drawing_list*)malloc(sizeof(Drawing_list));
				head->figure = figure;
				head->x1 = x1;
				head->x2 = x2;
				head->y1 = y1;
				head->y2 = y2;
				head->next = NULL;
			}
			else
			{
				Drawing_list* tmp = (Drawing_list*)malloc(sizeof(Drawing_list));
				tmp->figure = figure;
				tmp->x1 = x1;
				tmp->x2 = x2;
				tmp->y1 = y1;
				tmp->y2 = y2;
				tmp->next = head;
				head = tmp;
			}
		}
		void Delete_list()
		{
			Drawing_list* iter;
			while (head)
			{
				iter = head;
				head = head->next;
				free(iter);
			}
			head = NULL;
		}
		void Draw_figures()
		{
			Drawing_list* iter = head;
			while (iter)
			{
				switch (iter->figure)
				{
				case 0:
					MyGraphic->DrawLine(MyPen, iter->x1, iter->y1, iter->x2,
						iter->y2);
					break;
				case 1:
					MyGraphic->DrawEllipse(MyPen, iter->x1, iter->y1, iter->x2, iter->y2);
					break;
				default:
					break;
				}
				iter = iter->next;
			}
		}
	private: System::Void menuStrip1_ItemClicked(System::Object^ sender,
		System::Windows::Forms::ToolStripItemClickedEventArgs^ e) {
	}
	private: System::Void pictureBox1_MouseDown(System::Object^ sender,
		System::Windows::Forms::MouseEventArgs^ e) {

	}
	private: System::Void pictureBox1_MouseUp(System::Object^ sender,
		System::Windows::Forms::MouseEventArgs^ e) {
		Draw_ = false;
		if (radioButton1->Checked)
		{
			MyGraphic->DrawLine(MyPen, x1, y1, e->X, e->Y); CreateNode(0, x1, y1, e->X, e->Y);
			CreateTempUndo();
		}
		if (radioButton2->Checked)
		{
			MyGraphic->DrawEllipse(MyPen, x1, y1, e->X - x1, e->Y -
				y1); CreateNode(1, x1, y1, e->X - x1, e->Y - y1);
			CreateTempUndo();
		}
		if (radioButton3->Checked)
		{
			MyGraphic->DrawRectangle(MyPen, x1, y1, e->X - x1, e->X - abs(x1)); CreateNode(1, x1, y1, e->X - x1, e->X - x1);
			CreateTempUndo();
		}
		if (radioButton4->Checked)
		{
			array<Point>^ points = { Point(x1,e->Y), Point(e->X, e->Y), Point((x1 + e->X) / 2,y1) };
			MyGraphic->DrawPolygon(MyPen, points);
			CreateTempUndo();
		}
		if (radioButton5->Checked)
		{
			MyGraphic->DrawRectangle(MyPen, x1, y1, e->X - x1, e->Y - y1); 
			CreateNode(1, x1, y1, e->X - x1, e->Y - y1);
			CreateTempUndo();
		}

		if (radioButton6->Checked)
		{
			MyGraphic->DrawEllipse(MyPen, x1, y1, e->X - x1, e->X -
				x1); CreateNode(1, x1, y1, e->X - x1, e->X - x1);
			CreateTempUndo();
		}
		if (radioButton7->Checked) {
			System::Drawing::Brush^ linearGradientBrush_ = gcnew System::Drawing::Drawing2D::LinearGradientBrush(ClientRectangle, Color::Red,Color::White, 45);
			MyGraphic->FillEllipse(linearGradientBrush_, x1, y1, e->X-x1, e->Y-y1);
			CreateTempUndo();
		}
		if (radioButton8->Checked) {
			System::Drawing::Brush^ linearGradientBrush_ = gcnew System::Drawing::Drawing2D::LinearGradientBrush(ClientRectangle, Color::Red, Color::White, 45);
			MyGraphic->FillRectangle(linearGradientBrush_, x1, y1, e->X - x1, e->Y - y1);
			CreateTempUndo();
		}
		if (radioButton9->Checked) {
			System::Drawing::Brush^ linearGradientBrush_ = gcnew System::Drawing::Drawing2D::LinearGradientBrush(ClientRectangle, Color::Red, Color::White, 45);
			MyGraphic->FillRectangle(linearGradientBrush_, x1, y1, e->X - x1, e->X - x1);
			CreateTempUndo();
		}
		if (radioButton10->Checked) {
			array<Point>^ points = { Point(x1,e->Y), Point(e->X, e->Y), Point((x1 + e->X) / 2,y1) };
			System::Drawing::Brush^ linearGradientBrush_ = gcnew System::Drawing::Drawing2D::LinearGradientBrush(ClientRectangle, Color::Red, Color::White, 45);
			MyGraphic->FillPolygon(linearGradientBrush_, points);
			CreateTempUndo();
		}
		if (radioButton11->Checked) {
			System::Drawing::Brush^ linearGradientBrush_ = gcnew System::Drawing::Drawing2D::LinearGradientBrush(ClientRectangle, Color::Red, Color::White, 45);
			MyGraphic->FillEllipse(linearGradientBrush_, x1, y1, e->X - x1, e->X - x1);
			CreateTempUndo();
		}

		pictureBox1->Invalidate();
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		/*Delete_list();
		MyGraphic->Clear(Color::White);
		pictureBox1->Invalidate();*/
		Delete_list();
		bmp = gcnew System::Drawing::Bitmap(width - 120, height);
		pictureBox1->Image = bmp;
		MyGraphic = System::Drawing::Graphics::FromImage(pictureBox1->Image);
		MyGraphic->Clear(Color::White);
		pictureBox1->Invalidate();
	}

		   int count = 1;
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		char* temp_path = getenv("TEMP");
		char path[255];
		sprintf(path, "%s\\Lab5_Temp_Images\\", temp_path);
		tempPath = gcnew String(path);
		FILE* fp;
		fp = fopen(path, "r");
		if (fp == 0) {
			int createdir = mkdir(path);
		}
		else {
			Directory::Delete(tempPath, true);
			int createdir = mkdir(path);
		}

		MyPen = gcnew Pen(color);
		//this->BackColor = System::Drawing::Color::LightGray;
		height = 600;
		width = 800;
		bmp = gcnew System::Drawing::Bitmap(width, height);
		pictureBox1->Width = width-120;
		pictureBox1->Height = height;
		pictureBox1->Image = bmp;
		MyGraphic = System::Drawing::Graphics::FromImage(pictureBox1->Image);
		MyGraphic->Clear(Color::White);
	}

		   System::Void CreateTempUndo() {
			   char* temp_path = getenv("TEMP");
			   char path[255];
			   sprintf(path, "%s\\Lab5_Temp_Images\\", temp_path);
			   tempPath = gcnew String(path);
			   int result = mkdir(path);
			   tempPath = tempPath + count + "Undo.bmp";
			   this->pictureBox1->Image->Save(tempPath, System::Drawing::Imaging::ImageFormat::Bmp);
			   count++;
		   }

		   System::Void GetUndo() {
			   if (count <= 0) {
				   MessageBox::Show("Net.");
			   }
			   else {
				   char* temp_path = getenv("TEMP");
				   char path[255];
				   sprintf(path, "%s\\Lab5_Temp_Images\\", temp_path);
				   tempPath = gcnew String(path);

				   Bitmap^ image;
				   image = gcnew Bitmap(tempPath + (count - 1) + "Undo.bmp");
				   count -= 1;
				   pictureBox1->Image = image;
				   pictureBox1->Invalidate();
			   }
			   
		   }

		   System::Void CreateTempRedo() {
			   char* temp_path = getenv("TEMP");
			   char path[255];
			   sprintf(path, "%s\\Lab5_Temp_Images\\", temp_path);
			   tempPath = gcnew String(path);

			   Bitmap^ image;
			   image = gcnew Bitmap(tempPath+(count+1)+"Undo.bmp");
			   count++;
			   pictureBox1->Image = image;
			   pictureBox1->Invalidate();
		   }

		   String^ filePath = "";
		   String^ tempPath = "";
	private: System::Void saveToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

		if (filePath->Length > 2) {
			this->pictureBox1->Image->Save(filePath, System::Drawing::Imaging::ImageFormat::Bmp);
		}
		else {
			saveFileDialog1->OverwritePrompt = true;
			saveFileDialog1->CheckPathExists = true;
			saveFileDialog1->Filter =
				"Bitmap File(*.bmp)|*.bmp|" +
				"GIF File(*.gif)|*.gif|" +
				"JPEG File(*.jpg)|*.jpg|" +
				"TIF File(*.tif)|*.tif|" +
				"PNG File(*.png)|*.png";
			saveFileDialog1->ShowHelp = true;
			if (saveFileDialog1->ShowDialog() ==
				System::Windows::Forms::DialogResult::OK) {
				this->pictureBox1->Image->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Bmp);
			}
		}
		
	}
	private: System::Void newToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^
		e) {
		Delete_list();
		bmp = gcnew System::Drawing::Bitmap(width-120, height);
		pictureBox1->Image = bmp;
		MyGraphic = System::Drawing::Graphics::FromImage(pictureBox1->Image);
		MyGraphic->Clear(Color::White);
		pictureBox1->Invalidate();
	}
	private: System::Void pictureBox1_MouseMove(System::Object^ sender,
		System::Windows::Forms::MouseEventArgs^ e) {
		if (Draw_ == true)
		{
			MyGraphic->Clear(Color::White);
			if (radioButton1->Checked == true) MyGraphic->DrawLine(MyPen, x1, y1, e->X, e->Y);
			if (radioButton2->Checked == true) MyGraphic->DrawEllipse(MyPen, x1, y1, e->X
				- x1, e->Y - y1);
			Draw_figures();
			pictureBox1->Invalidate();
		}
	}
	private: System::Void pictureBox1_MouseDown_1(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		x1 = e->X;
		y1 = e->Y;
		Draw_ = true;
	}
	private: System::Void changeColorToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->colorDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			//this->richTextBox1->SelectionColor = this->colorDialog1->Color;
			color = this->colorDialog1->Color;
			MyPen = gcnew Pen(color);
		}
	}
private: System::Void endoToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	GetUndo();
}
private: System::Void saveAsToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	saveFileDialog1->OverwritePrompt = true;
	saveFileDialog1->CheckPathExists = true;
	saveFileDialog1->Filter =
		"Bitmap File(*.bmp)|*.bmp|" +
		"GIF File(*.gif)|*.gif|" +
		"JPEG File(*.jpg)|*.jpg|" +
		"TIF File(*.tif)|*.tif|" +
		"PNG File(*.png)|*.png";
	saveFileDialog1->ShowHelp = true;
	if (saveFileDialog1->ShowDialog() ==
		System::Windows::Forms::DialogResult::OK) {
		this->pictureBox1->Image->Save(saveFileDialog1->FileName, System::Drawing::Imaging::ImageFormat::Bmp);
		filePath = saveFileDialog1->FileName;
	}
}
private: System::Void openToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		Bitmap^ image;
		image = gcnew Bitmap(openFileDialog1->FileName);
		pictureBox1->Image = image;
		pictureBox1->Invalidate();
	}
}
private: System::Void numericUpDown1_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	float width = (float)Convert::ToDouble(numericUpDown1->Value);
	MyPen->Width = width;
}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	if (comboBox1->Text == "������") {
		MyPen->DashStyle = System::Drawing::Drawing2D::DashStyle::Solid;
	}
	else if (comboBox1->Text == "���������") {
		MyPen->DashStyle = System::Drawing::Drawing2D::DashStyle::Dash;
	}
	else {
		MyPen->DashStyle = System::Drawing::Drawing2D::DashStyle::Solid;
	}
}
private: System::Void redoToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	CreateTempRedo();
}
private: System::Void radioButton7_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
