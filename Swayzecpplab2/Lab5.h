#include <stdio.h>
#include <stdlib.h>
#pragma once

namespace Swayzecpplab2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	struct Drawing_list {
		int figure;
		int x1, x2, y1, y2;
		struct Drawing_list* next;
	};

	/// <summary>
	/// Summary for Lab5
	/// </summary>
	public ref class Lab5 : public System::Windows::Forms::Form
	{
	public:
		Lab5(void)
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
		~Lab5()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ ����ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ��������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ����������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �����������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �������ĳ�ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ����������������ĳ�ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �����������ToolStripMenuItem;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ColorDialog^ colorDialog1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;



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
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�����������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������ĳ�ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����������������ĳ�ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�����������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->colorDialog1 = (gcnew System::Windows::Forms::ColorDialog());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->����ToolStripMenuItem,
					this->�����������ToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(843, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// ����ToolStripMenuItem
			// 
			this->����ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->�������ToolStripMenuItem,
					this->��������ToolStripMenuItem, this->����������ToolStripMenuItem
			});
			this->����ToolStripMenuItem->Name = L"����ToolStripMenuItem";
			this->����ToolStripMenuItem->Size = System::Drawing::Size(48, 20);
			this->����ToolStripMenuItem->Text = L"����";
			// 
			// �������ToolStripMenuItem
			// 
			this->�������ToolStripMenuItem->Name = L"�������ToolStripMenuItem";
			this->�������ToolStripMenuItem->Size = System::Drawing::Size(139, 22);
			this->�������ToolStripMenuItem->Text = L"³������";
			// 
			// ��������ToolStripMenuItem
			// 
			this->��������ToolStripMenuItem->Name = L"��������ToolStripMenuItem";
			this->��������ToolStripMenuItem->Size = System::Drawing::Size(139, 22);
			this->��������ToolStripMenuItem->Text = L"��������";
			// 
			// ����������ToolStripMenuItem
			// 
			this->����������ToolStripMenuItem->Name = L"����������ToolStripMenuItem";
			this->����������ToolStripMenuItem->Size = System::Drawing::Size(139, 22);
			this->����������ToolStripMenuItem->Text = L"�������� ��";
			// 
			// �����������ToolStripMenuItem
			// 
			this->�����������ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->�������ĳ�ToolStripMenuItem,
					this->����������������ĳ�ToolStripMenuItem, this->�����������ToolStripMenuItem
			});
			this->�����������ToolStripMenuItem->Name = L"�����������ToolStripMenuItem";
			this->�����������ToolStripMenuItem->Size = System::Drawing::Size(87, 20);
			this->�����������ToolStripMenuItem->Text = L"�����������";
			// 
			// �������ĳ�ToolStripMenuItem
			// 
			this->�������ĳ�ToolStripMenuItem->Name = L"�������ĳ�ToolStripMenuItem";
			this->�������ĳ�ToolStripMenuItem->Size = System::Drawing::Size(207, 22);
			this->�������ĳ�ToolStripMenuItem->Text = L"³������ ��";
			// 
			// ����������������ĳ�ToolStripMenuItem
			// 
			this->����������������ĳ�ToolStripMenuItem->Name = L"����������������ĳ�ToolStripMenuItem";
			this->����������������ĳ�ToolStripMenuItem->Size = System::Drawing::Size(207, 22);
			this->����������������ĳ�ToolStripMenuItem->Text = L"��������� ������� ��";
			// 
			// �����������ToolStripMenuItem
			// 
			this->�����������ToolStripMenuItem->Name = L"�����������ToolStripMenuItem";
			this->�����������ToolStripMenuItem->Size = System::Drawing::Size(207, 22);
			this->�����������ToolStripMenuItem->Text = L"���� �������";
			this->�����������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Lab5::�����������ToolStripMenuItem_Click);
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(425, 4);
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(120, 20);
			this->numericUpDown1->TabIndex = 1;
			this->numericUpDown1->ValueChanged += gcnew System::EventHandler(this, &Lab5::numericUpDown1_ValueChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Roboto", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(329, 5);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(90, 15);
			this->label1->TabIndex = 2;
			this->label1->Text = L"������� ��";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(0, 27);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(843, 563);
			this->pictureBox1->TabIndex = 3;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Lab5::pictureBox1_MouseDown);
			this->pictureBox1->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &Lab5::pictureBox1_MouseUp);
			// 
			// Lab5
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(843, 589);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->numericUpDown1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Lab5";
			this->Text = L"Lab5";
			this->Load += gcnew System::EventHandler(this, &Lab5::Lab5_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		private:
			Graphics^ MyGraphic;
			Pen^ MyPen;
			Bitmap^ bmp;
			int x1, y1;
			int width, height;
			System::Drawing::Color color = Color::Black;
			int linewidth = 1;

			bool Draw_ = false;

			TextBox^ textBox1;
			TextBox^ textBox2;

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
						MyGraphic->DrawEllipse(MyPen, iter->x1, iter->y1, iter -> x2, iter->y2);
						break;
					default:
						break;
					}
					iter = iter->next;
				}
			}


	private: System::Void �����������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->colorDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			//this->richTextBox1->SelectionColor = this->colorDialog1->Color;
			color = this->colorDialog1->Color;
		}
	}
private: System::Void Lab5_Load(System::Object^ sender, System::EventArgs^ e) {
	MyPen = gcnew Pen(color);
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
private: System::Void numericUpDown1_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	linewidth = System::Convert::ToInt32(numericUpDown1->Value);
}
private: System::Void pictureBox1_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	x1 = e->X;
	y1 = e->Y;
	Draw_ = true;

}

private: System::Void pictureBox1_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	Draw_ = false;
	MyGraphic->DrawLine(MyPen, x1, y1, e->X, e -> Y); CreateNode(0, x1, y1, e->X, e->Y);
}
};
}
