#include <time.h>
#include <vector>
#include <fstream>
#include <random>
#include <algorithm>
#include <msclr/marshal_cppstd.h>
#include "RunSorting.h"

#pragma once

namespace lab1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;
	/// <summary>
	/// Summary for MyForm
	/// </summary>

	public ref class MyForm : public System::Windows::Forms::Form
	{

	public:

		MyForm(void)
		{
			InitializeComponent();
			arr = new vector<int>();
			work = new vector<int>();
		}



		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
			if (arr) {
				delete arr;
				arr = nullptr;
			}
			if (work) {
				delete work;
				work = nullptr;
			}

		}
	private: System::Windows::Forms::Label^ ArraySizeLabel;

	private: System::Windows::Forms::Button^ GenRandNumButton;


	protected:

	protected:

	private: System::Windows::Forms::Button^ SortArrayButton;

	private: System::Windows::Forms::Label^ TimerLabel;


	private: System::ComponentModel::IContainer^ components;




	private: vector<int>* arr;
	private: vector<int>* work;
	private: int arr_size = 0;
	private: int choise = 0;
	private: int size_choise = 0;
	private: System::Windows::Forms::ComboBox^ SelectSortComboBox;
	private: System::Windows::Forms::ComboBox^ ChoiseArraySizeComboBox;



	private: System::Windows::Forms::Label^ ChoiseSortLabel;


	private: System::Windows::Forms::Label^ CountTimerLabel;


#pragma region Windows Form Designer generated code
		   /// <summary>
		   /// Required method for Designer support - do not modify
		   /// the contents of this method with the code editor.
		   /// </summary>
		   void InitializeComponent(void)
		   {
			   this->ArraySizeLabel = (gcnew System::Windows::Forms::Label());
			   this->GenRandNumButton = (gcnew System::Windows::Forms::Button());
			   this->SortArrayButton = (gcnew System::Windows::Forms::Button());
			   this->TimerLabel = (gcnew System::Windows::Forms::Label());
			   this->CountTimerLabel = (gcnew System::Windows::Forms::Label());
			   this->SelectSortComboBox = (gcnew System::Windows::Forms::ComboBox());
			   this->ChoiseArraySizeComboBox = (gcnew System::Windows::Forms::ComboBox());
			   this->ChoiseSortLabel = (gcnew System::Windows::Forms::Label());
			   this->SuspendLayout();
			   // 
			   // ArraySizeLabel
			   // 
			   this->ArraySizeLabel->AutoSize = true;
			   this->ArraySizeLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(204)));
			   this->ArraySizeLabel->Location = System::Drawing::Point(31, 54);
			   this->ArraySizeLabel->Name = L"ArraySizeLabel";
			   this->ArraySizeLabel->Size = System::Drawing::Size(229, 29);
			   this->ArraySizeLabel->TabIndex = 0;
			   this->ArraySizeLabel->Text = L"Choise size of array:";
			   // 
			   // GenRandNumButton
			   // 
			   this->GenRandNumButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(204)));
			   this->GenRandNumButton->Location = System::Drawing::Point(53, 287);
			   this->GenRandNumButton->Name = L"GenRandNumButton";
			   this->GenRandNumButton->Size = System::Drawing::Size(135, 122);
			   this->GenRandNumButton->TabIndex = 2;
			   this->GenRandNumButton->Text = L"Generate Random Array";
			   this->GenRandNumButton->UseVisualStyleBackColor = true;
			   this->GenRandNumButton->Click += gcnew System::EventHandler(this, &MyForm::GenRandNumButton_Click);
			   // 
			   // SortArrayButton
			   // 
			   this->SortArrayButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(204)));
			   this->SortArrayButton->Location = System::Drawing::Point(310, 287);
			   this->SortArrayButton->Name = L"SortArrayButton";
			   this->SortArrayButton->Size = System::Drawing::Size(119, 58);
			   this->SortArrayButton->TabIndex = 7;
			   this->SortArrayButton->Text = L"Sort";
			   this->SortArrayButton->UseVisualStyleBackColor = true;
			   this->SortArrayButton->Click += gcnew System::EventHandler(this, &MyForm::SortArrayButton_Click);
			   // 
			   // TimerLabel
			   // 
			   this->TimerLabel->AutoSize = true;
			   this->TimerLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(204)));
			   this->TimerLabel->Location = System::Drawing::Point(31, 221);
			   this->TimerLabel->Name = L"TimerLabel";
			   this->TimerLabel->Size = System::Drawing::Size(83, 29);
			   this->TimerLabel->TabIndex = 9;
			   this->TimerLabel->Text = L"Timer:";
			   // 
			   // CountTimerLabel
			   // 
			   this->CountTimerLabel->AutoSize = true;
			   this->CountTimerLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(204)));
			   this->CountTimerLabel->Location = System::Drawing::Point(135, 221);
			   this->CountTimerLabel->Name = L"CountTimerLabel";
			   this->CountTimerLabel->Size = System::Drawing::Size(0, 29);
			   this->CountTimerLabel->TabIndex = 10;
			   // 
			   // SelectSortComboBox
			   // 
			   this->SelectSortComboBox->AllowDrop = true;
			   this->SelectSortComboBox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			   this->SelectSortComboBox->FormattingEnabled = true;
			   this->SelectSortComboBox->Items->AddRange(gcnew cli::array< System::Object^  >(4) {
				   L"1 - Shell Sort", L"2 - Quick Sort",
					   L"3 - Merge Sort", L"4 - Counting Sort"
			   });
			   this->SelectSortComboBox->Location = System::Drawing::Point(266, 148);
			   this->SelectSortComboBox->Name = L"SelectSortComboBox";
			   this->SelectSortComboBox->Size = System::Drawing::Size(163, 28);
			   this->SelectSortComboBox->TabIndex = 11;
			   // 
			   // ChoiseArraySizeComboBox
			   // 
			   this->ChoiseArraySizeComboBox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			   this->ChoiseArraySizeComboBox->FormattingEnabled = true;
			   this->ChoiseArraySizeComboBox->Items->AddRange(gcnew cli::array< System::Object^  >(7) {
				   L"1024", L"4096", L"16384", L"65536",
					   L"262144", L"1048576", L"4194304"
			   });
			   this->ChoiseArraySizeComboBox->Location = System::Drawing::Point(266, 55);
			   this->ChoiseArraySizeComboBox->Name = L"ChoiseArraySizeComboBox";
			   this->ChoiseArraySizeComboBox->Size = System::Drawing::Size(163, 28);
			   this->ChoiseArraySizeComboBox->TabIndex = 14;
			   // 
			   // ChoiseSortLabel
			   // 
			   this->ChoiseSortLabel->AutoSize = true;
			   this->ChoiseSortLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(204)));
			   this->ChoiseSortLabel->Location = System::Drawing::Point(31, 148);
			   this->ChoiseSortLabel->Name = L"ChoiseSortLabel";
			   this->ChoiseSortLabel->Size = System::Drawing::Size(145, 29);
			   this->ChoiseSortLabel->TabIndex = 15;
			   this->ChoiseSortLabel->Text = L"Choise Sort:";
			   //

			   // MyForm
			   // 
			   this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			   this->ClientSize = System::Drawing::Size(505, 482);
			   this->Controls->Add(this->ChoiseSortLabel);
			   this->Controls->Add(this->ChoiseArraySizeComboBox);
			   this->Controls->Add(this->SelectSortComboBox);
			   this->Controls->Add(this->CountTimerLabel);
			   this->Controls->Add(this->TimerLabel);
			   this->Controls->Add(this->SortArrayButton);
			   this->Controls->Add(this->GenRandNumButton);
			   this->Controls->Add(this->ArraySizeLabel);
			   this->Name = L"MyForm";
			   this->Text = L"MyForm";
			   this->ResumeLayout(false);
			   this->PerformLayout();

		   }
#pragma endregion

	private: System::Void ArraySizeTextBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void GenRandNumButton_Click(System::Object^ sender, System::EventArgs^ e) {
		size_choise = ChoiseArraySizeComboBox->SelectedIndex;
		if (size_choise < 0) { MessageBox::Show("Select array size"); return; }

		const int sizes[] = { 1024, 4096, 16384, 65536, 262144, 1048576, 4194304 };
		arr_size = sizes[size_choise];

		ofstream file("D:\\NYLP\\2k1s\\ASD\\labs\\lab5\\output.txt");
		if (!file.is_open()) return;

		std::mt19937 gen(std::random_device{}());
		std::uniform_int_distribution<int> dist(1, 100001);

		arr->clear();
		arr->reserve(arr_size);
		for (int i = 0; i < arr_size; i++) {
			arr->push_back(dist(gen));
			file << (*arr)[i] << '\n';
		}
		file.close();
		MessageBox::Show("Array saved to file", "Result", MessageBoxButtons::OK);
	}
	
	private: System::Void SortArrayButton_Click(System::Object^ sender, System::EventArgs^ e) {
		choise = SelectSortComboBox->SelectedIndex;
		if (arr->empty() || choise < 0) {
			MessageBox::Show("Generate an array and select a sort first");
			return;
		}

		warmUp(choise, *arr, *work);

		*work = *arr; 
		double time_ms = timedSort(choise, *work); 
		
		CountTimerLabel->Text = time_ms.ToString("F4") + " ms";
			

		ofstream res_file("D:\\NYLP\\2k1s\\ASD\\labs\\lab5\\result.txt");
		res_file << "Result:\nTimer: " << time_ms << " ms\n";
		for (size_t i = 0; i < work->size(); i++) res_file << (*work)[i] << '\n';
		res_file.close();

		MessageBox::Show("Sorted array saved to a file", "Result", MessageBoxButtons::OK);
	}
	};
}
