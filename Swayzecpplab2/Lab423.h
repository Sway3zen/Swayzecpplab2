#pragma once
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <sstream>
#include <string>

namespace Swayzecpplab2 {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;

    /// <summary>
    /// Summary for Lab423
    /// </summary>
    public ref class Lab423 : public System::Windows::Forms::Form
    {
    public:
        Lab423(void)
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
        ~Lab423()
        {
            if (components)
            {
                delete components;
            }
        }
    private: System::Windows::Forms::ComboBox^ comboBox1;
    private: System::Windows::Forms::CheckedListBox^ checkedListBox1;
    private: System::Windows::Forms::DataGridView^ dataGridView1;
    private: System::Windows::Forms::ListBox^ listBox1;
    private: System::Windows::Forms::Button^ button1;
    private: System::Windows::Forms::Button^ button2;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
    protected:

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
            this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
            this->checkedListBox1 = (gcnew System::Windows::Forms::CheckedListBox());
            this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
            this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->listBox1 = (gcnew System::Windows::Forms::ListBox());
            this->button1 = (gcnew System::Windows::Forms::Button());
            this->button2 = (gcnew System::Windows::Forms::Button());
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
            this->SuspendLayout();
            // 
            // comboBox1
            // 
            this->comboBox1->FormattingEnabled = true;
            this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"ListBox", L"DataGridView" });
            this->comboBox1->Location = System::Drawing::Point(297, 59);
            this->comboBox1->Name = L"comboBox1";
            this->comboBox1->Size = System::Drawing::Size(121, 21);
            this->comboBox1->TabIndex = 0;
            // 
            // checkedListBox1
            // 
            this->checkedListBox1->FormattingEnabled = true;
            this->checkedListBox1->Location = System::Drawing::Point(41, 99);
            this->checkedListBox1->Name = L"checkedListBox1";
            this->checkedListBox1->Size = System::Drawing::Size(233, 349);
            this->checkedListBox1->TabIndex = 1;
            // 
            // dataGridView1
            // 
            this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
            this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(1) { this->Column1 });
            this->dataGridView1->Location = System::Drawing::Point(453, 99);
            this->dataGridView1->Name = L"dataGridView1";
            this->dataGridView1->Size = System::Drawing::Size(240, 150);
            this->dataGridView1->TabIndex = 2;
            // 
            // Column1
            // 
            this->Column1->HeaderText = L"Column1";
            this->Column1->Name = L"Column1";
            // 
            // listBox1
            // 
            this->listBox1->ColumnWidth = 100;
            this->listBox1->FormattingEnabled = true;
            this->listBox1->Location = System::Drawing::Point(453, 294);
            this->listBox1->Name = L"listBox1";
            this->listBox1->Size = System::Drawing::Size(120, 95);
            this->listBox1->TabIndex = 3;
            // 
            // button1
            // 
            this->button1->Location = System::Drawing::Point(110, 57);
            this->button1->Name = L"button1";
            this->button1->Size = System::Drawing::Size(75, 23);
            this->button1->TabIndex = 4;
            this->button1->Text = L"Генерувати";
            this->button1->UseVisualStyleBackColor = true;
            this->button1->Click += gcnew System::EventHandler(this, &Lab423::button1_Click);
            // 
            // button2
            // 
            this->button2->Location = System::Drawing::Point(453, 59);
            this->button2->Name = L"button2";
            this->button2->Size = System::Drawing::Size(75, 23);
            this->button2->TabIndex = 5;
            this->button2->Text = L"Виконати ";
            this->button2->UseVisualStyleBackColor = true;
            this->button2->Click += gcnew System::EventHandler(this, &Lab423::button2_Click);
            // 
            // Lab423
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
            this->ClientSize = System::Drawing::Size(831, 460);
            this->Controls->Add(this->button2);
            this->Controls->Add(this->button1);
            this->Controls->Add(this->listBox1);
            this->Controls->Add(this->dataGridView1);
            this->Controls->Add(this->checkedListBox1);
            this->Controls->Add(this->comboBox1);
            this->Name = L"Lab423";
            this->Text = L"Lab423";
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
            this->ResumeLayout(false);

        }

#pragma endregion

        private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
            // Seed random number generator
            srand(time(NULL));
            // Generate 30 random numbers and add to CheckedListBox
            for (int i = 0; i < 30; i++) {
                int num = rand() % 100 - 50; // Generate random number between -50 and 49
                checkedListBox1->Items->Add(num);
            }
            // Clear ListBox or DataGridView
            if (comboBox1->SelectedItem == "listBox1") {
                listBox1->Items->Clear();
            }
            else if (comboBox1->SelectedItem == "DataGridView") {
                dataGridView1->Rows->Clear();
                dataGridView1->Columns->Clear();
                dataGridView1->Columns->Add("Numbers", "Numbers");
            }

            // Add all checked items to listBox1
            for (int i = 0; i < checkedListBox1->Items->Count; i++) {
                if (checkedListBox1->GetItemChecked(i)) {
                    listBox1->Items->Add(checkedListBox1->Items[i]);
                }
            }
        }

 private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

     array<int>^ numbers = gcnew array<int>(checkedListBox1->CheckedItems->Count);
     for (int i = 0; i < checkedListBox1->CheckedItems->Count; i++) {
         String^ itemText = checkedListBox1->CheckedItems[i]->ToString();
         int number = System::Convert::ToInt32(itemText);
         numbers[i] = number;
     }

     for (int i = 0; i < numbers->Length - 1; i += 2) {
         int temp = numbers[i];
         numbers[i] = numbers[i + 1];
         numbers[i + 1] = temp;
     }
     listBox1->Items->Clear();

     for (int i = 0; i < numbers->Length; i++) {
         listBox1->Items->Add(numbers[i].ToString());
     }
     for (int i = 0; i < numbers->Length; i++) {
         dataGridView1->Rows->Add(numbers[i].ToString());
     }

 }





        /*
          // Display array in ListBox or DataGridView
          if (comboBox1->SelectedItem != nullptr && comboBox1->SelectedItem->ToString() == "listBox1") {
           listBox1->Items->Clear();
           for (int i = 0; i < numbers->Length; i++) {
            listBox1->Items->Add(numbers[i].ToString());
           }
          }
          else if (comboBox1->SelectedItem != nullptr && comboBox1->SelectedItem->ToString() == "DataGridView") {
           dataGridView1->Rows->Clear();
           for (int i = 0; i < numbers->Length; i++) {
            dataGridView1->Rows->Add(numbers[i].ToString());
           }
          }



         }

        */

};
}