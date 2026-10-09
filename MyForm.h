#include <time.h>
#include <stdlib.h>
#include <vector>
#include <stdio.h>
#include <algorithm>
#include <iterator>
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
			max_inx_aray = new vector<int>();
			stop_timer = gcnew System::Diagnostics::Stopwatch();
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
			if (max_inx_aray) {
				delete max_inx_aray;
				max_inx_aray = nullptr;
			}
		}
	private: System::Windows::Forms::Label^ ArraySizeLabel;
	private: System::Windows::Forms::TextBox^ ArraySizeTextBox;
	private: System::Windows::Forms::Button^ GenRandNumButton;
	private: System::Windows::Forms::Label^ ResultLabel;
	private: System::Windows::Forms::Label^ ResultSortedArrayLabel;
	protected:

	protected:





	private: System::Windows::Forms::Label^ OutputGenRandNumLabel;
	private: System::Windows::Forms::Label^ OutputArrayLabel;
	private: System::Windows::Forms::Button^ SortArrayButton;

	private: System::Windows::Forms::Label^ TimerLabel;


	private: System::ComponentModel::IContainer^ components;



	
	private: int arr_size;
	private: vector<int>* arr;
	private: vector<int>* max_inx_aray;
	private: bool isSorted = false;
	private: System::Diagnostics::Stopwatch^ stop_timer;
	private: System::Windows::Forms::Label^ IsSortedLabel;
	private: System::Windows::Forms::Label^ CountTimerLabel;


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->ArraySizeLabel = (gcnew System::Windows::Forms::Label());
			this->ArraySizeTextBox = (gcnew System::Windows::Forms::TextBox());
			this->GenRandNumButton = (gcnew System::Windows::Forms::Button());
			this->ResultLabel = (gcnew System::Windows::Forms::Label());
			this->ResultSortedArrayLabel = (gcnew System::Windows::Forms::Label());
			this->OutputGenRandNumLabel = (gcnew System::Windows::Forms::Label());
			this->OutputArrayLabel = (gcnew System::Windows::Forms::Label());
			this->SortArrayButton = (gcnew System::Windows::Forms::Button());
			this->TimerLabel = (gcnew System::Windows::Forms::Label());
			this->CountTimerLabel = (gcnew System::Windows::Forms::Label());
			this->IsSortedLabel = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// ArraySizeLabel
			// 
			this->ArraySizeLabel->AutoSize = true;
			this->ArraySizeLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ArraySizeLabel->Location = System::Drawing::Point(31, 54);
			this->ArraySizeLabel->Name = L"ArraySizeLabel";
			this->ArraySizeLabel->Size = System::Drawing::Size(210, 29);
			this->ArraySizeLabel->TabIndex = 0;
			this->ArraySizeLabel->Text = L"Enter size of array:";
			// 
			// ArraySizeTextBox
			// 
			this->ArraySizeTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ArraySizeTextBox->Location = System::Drawing::Point(274, 54);
			this->ArraySizeTextBox->Name = L"ArraySizeTextBox";
			this->ArraySizeTextBox->Size = System::Drawing::Size(163, 35);
			this->ArraySizeTextBox->TabIndex = 1;
			this->ArraySizeTextBox->TextChanged += gcnew System::EventHandler(this, &MyForm::ArraySizeTextBox_TextChanged);
			// 
			// GenRandNumButton
			// 
			this->GenRandNumButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->GenRandNumButton->Location = System::Drawing::Point(36, 126);
			this->GenRandNumButton->Name = L"GenRandNumButton";
			this->GenRandNumButton->Size = System::Drawing::Size(135, 122);
			this->GenRandNumButton->TabIndex = 2;
			this->GenRandNumButton->Text = L"Generate Random Array";
			this->GenRandNumButton->UseVisualStyleBackColor = true;
			this->GenRandNumButton->Click += gcnew System::EventHandler(this, &MyForm::GenRandNumButton_Click);
			// 
			// ResultLabel
			// 
			this->ResultLabel->AutoSize = true;
			this->ResultLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ResultLabel->Location = System::Drawing::Point(200, 300);
			this->ResultLabel->Name = L"ResultLabel";
			this->ResultLabel->Size = System::Drawing::Size(87, 29);
			this->ResultLabel->TabIndex = 4;
			this->ResultLabel->Text = L"Result:";
			// 
			// ResultSortedArrayLabel
			// 
			this->ResultSortedArrayLabel->AutoSize = true;
			this->ResultSortedArrayLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->ResultSortedArrayLabel->Location = System::Drawing::Point(313, 300);
			this->ResultSortedArrayLabel->Name = L"ResultSortedArrayLabel";
			this->ResultSortedArrayLabel->Size = System::Drawing::Size(0, 29);
			this->ResultSortedArrayLabel->TabIndex = 5;
			// 
			// OutputGenRandNumLabel
			// 
			this->OutputGenRandNumLabel->AutoSize = true;
			this->OutputGenRandNumLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->OutputGenRandNumLabel->Location = System::Drawing::Point(200, 160);
			this->OutputGenRandNumLabel->Name = L"OutputGenRandNumLabel";
			this->OutputGenRandNumLabel->Size = System::Drawing::Size(90, 29);
			this->OutputGenRandNumLabel->TabIndex = 6;
			this->OutputGenRandNumLabel->Text = L"Output:";
			// 
			// OutputArrayLabel
			// 
			this->OutputArrayLabel->AutoSize = true;
			this->OutputArrayLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->OutputArrayLabel->Location = System::Drawing::Point(313, 160);
			this->OutputArrayLabel->Name = L"OutputArrayLabel";
			this->OutputArrayLabel->Size = System::Drawing::Size(0, 29);
			this->OutputArrayLabel->TabIndex = 6;
			// 
			// SortArrayButton
			// 
			this->SortArrayButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->SortArrayButton->Location = System::Drawing::Point(52, 285);
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
			this->TimerLabel->Location = System::Drawing::Point(64, 396);
			this->TimerLabel->Name = L"TimerLabel";
			this->TimerLabel->Size = System::Drawing::Size(77, 29);
			this->TimerLabel->TabIndex = 9;
			this->TimerLabel->Text = L"Timer";
			// 
			// CountTimerLabel
			// 
			this->CountTimerLabel->AutoSize = true;
			this->CountTimerLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->CountTimerLabel->Location = System::Drawing::Point(171, 396);
			this->CountTimerLabel->Name = L"CountTimerLabel";
			this->CountTimerLabel->Size = System::Drawing::Size(0, 29);
			this->CountTimerLabel->TabIndex = 10;
			// 
			// IsSortedLabel
			// 
			this->IsSortedLabel->AutoSize = true;
			this->IsSortedLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->IsSortedLabel->Location = System::Drawing::Point(200, 349);
			this->IsSortedLabel->Name = L"IsSortedLabel";
			this->IsSortedLabel->Size = System::Drawing::Size(0, 29);
			this->IsSortedLabel->TabIndex = 11;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(708, 584);
			this->Controls->Add(this->IsSortedLabel);
			this->Controls->Add(this->CountTimerLabel);
			this->Controls->Add(this->TimerLabel);
			this->Controls->Add(this->SortArrayButton);
			this->Controls->Add(this->OutputArrayLabel);
			this->Controls->Add(this->OutputGenRandNumLabel);
			this->Controls->Add(this->ResultSortedArrayLabel);
			this->Controls->Add(this->ResultLabel);
			this->Controls->Add(this->GenRandNumButton);
			this->Controls->Add(this->ArraySizeTextBox);
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
		OutputArrayLabel->Text = "";

		if (!String::IsNullOrWhiteSpace(ArraySizeTextBox->Text)) {
			arr_size = Convert::ToInt32(ArraySizeTextBox->Text);
			if (arr_size <= 0) {
				MessageBox::Show("Enter size > 0!","Warning", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			}
		}


		srand(time(0));
		arr->clear();
		arr->reserve(arr_size);

		int min_r = -50;
		int max_r = 51;

		//створення масиву + заповнення випадковими числами
		for (int i = 0; i < arr_size;i++) {
			arr->push_back(rand() % (max_r - min_r + 1) + min_r);
			OutputArrayLabel->Text += " " + Convert::ToString((*arr)[i]);
		}

		int min_num = (arr->begin(), arr->end());
		
}
private: System::Void SortArrayButton_Click(System::Object^ sender, System::EventArgs^ e) {
	
	ResultSortedArrayLabel->Text = "";
	stop_timer->Reset();
	stop_timer->Start();

	//сортування Шела
	if (!is_sorted(max_inx_aray->begin(), max_inx_aray->end())) {
		int size = max_inx_aray->size();

		for (int gap = size / 2; gap > 0; gap /= 2) {
			for (int i = gap; i < size; i++) {

				int temp = (*max_inx_aray)[i];
				int j = i;

				while (j >= gap && (*max_inx_aray)[j - gap] < temp) {
					(*max_inx_aray)[j] = (*max_inx_aray)[j - gap];
					j -= gap;
				}
				(*max_inx_aray)[j] = temp;
			}
			ResultSortedArrayLabel->Text += "Gap: " + gap + " ";
			for (int k = 0; k < size; k++) {
				ResultSortedArrayLabel->Text +=" " + Convert::ToString((*max_inx_aray)[k]);
			}
			ResultSortedArrayLabel->Text += "\n";
		}
	}

	stop_timer->Stop();
	
	// перевірка чи відсортований масив
	!is_sorted(max_inx_aray->begin(), max_inx_aray->end()) ? IsSortedLabel->Text = "Sorted!" : IsSortedLabel->Text = "Not Sorted!";
	
	//дописує до зрізаного масиву відсортовану частину
	arr->insert(arr->end(), max_inx_aray->begin(), max_inx_aray->end());

	//вивід часу + відсортованого масиву
	CountTimerLabel->Text = stop_timer->Elapsed.TotalMilliseconds.ToString("F6") + "ms";

	for (int i = 0; i < arr_size;i++) {
		ResultSortedArrayLabel->Text += " " + Convert::ToString((*arr)[i]);
	}
}
};
}
