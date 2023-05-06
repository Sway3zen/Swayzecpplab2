#pragma once
#include <stdlib.h>
namespace Swayzecpplab2 {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
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
			this->saveToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saveAsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->editToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->endoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->redoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->changeColorToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Dock = System::Windows::Forms::DockStyle::Right;
			this->pictureBox1->Location = System::Drawing::Point(87, 24);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(619, 466);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Lab52::pictureBox1_MouseDown_1);
			this->pictureBox1->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &Lab52::pictureBox1_MouseUp);
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->BackColor = System::Drawing::Color::White;
			this->radioButton1->Checked = true;
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
			this->radioButton2->BackColor = System::Drawing::Color::White;
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
			this->button1->Location = System::Drawing::Point(9, 460);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(56, 19);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Clear";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Lab52::button1_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->fileToolStripMenuItem,
					this->editToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Padding = System::Windows::Forms::Padding(4, 2, 0, 2);
			this->menuStrip1->Size = System::Drawing::Size(706, 24);
			this->menuStrip1->TabIndex = 4;
			this->menuStrip1->Text = L"menuStrip1";
			this->menuStrip1->ItemClicked += gcnew System::Windows::Forms::ToolStripItemClickedEventHandler(this, &Lab52::menuStrip1_ItemClicked);
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->newToolStripMenuItem,
					this->saveToolStripMenuItem, this->saveAsToolStripMenuItem
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
			this->endoToolStripMenuItem->Text = L"Endo";
			// 
			// redoToolStripMenuItem
			// 
			this->redoToolStripMenuItem->Name = L"redoToolStripMenuItem";
			this->redoToolStripMenuItem->Size = System::Drawing::Size(145, 22);
			this->redoToolStripMenuItem->Text = L"Redo";
			// 
			// changeColorToolStripMenuItem
			// 
			this->changeColorToolStripMenuItem->Name = L"changeColorToolStripMenuItem";
			this->changeColorToolStripMenuItem->Size = System::Drawing::Size(145, 22);
			this->changeColorToolStripMenuItem->Text = L"Change color";
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->BackColor = System::Drawing::Color::White;
			this->radioButton3->Location = System::Drawing::Point(9, 86);
			this->radioButton3->Margin = System::Windows::Forms::Padding(2);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(45, 17);
			this->radioButton3->TabIndex = 5;
			this->radioButton3->Text = L"Line";
			this->radioButton3->UseVisualStyleBackColor = false;
			// 
			// Lab52
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(706, 490);
			this->Controls->Add(this->radioButton3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"Lab52";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &Lab52::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
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
		}
		if (radioButton2->Checked)
		{
			MyGraphic->DrawEllipse(MyPen, x1, y1, e->X - x1, e->Y -
				y1); CreateNode(1, x1, y1, e->X - x1, e->Y - y1);
		}
		pictureBox1->Invalidate();
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		Delete_list();
		MyGraphic->Clear(Color::White);
		pictureBox1->Invalidate();
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		MyPen = gcnew Pen(Color::Black);
		this->BackColor = System::Drawing::Color::LightGray;
		height = 500;
		width = 1000;
		bmp = gcnew System::Drawing::Bitmap(width, height);
		pictureBox1->Width = width;
		pictureBox1->Height = height;
		pictureBox1->Image = bmp;
		MyGraphic = System::Drawing::Graphics::FromImage(pictureBox1->Image);
		MyGraphic->Clear(Color::White);
	}
	private: System::Void saveToolStripMenuItem_Click(System::Object^ sender,
		System::EventArgs^ e) {
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
	private: System::Void newToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^
		e) {
		Delete_list();
		bmp = gcnew System::Drawing::Bitmap(width, height);
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
	};
}
