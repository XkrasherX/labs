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
			
			stop_timer = gcnew System::Diagnostics::Stopwatch();
			sort_step = 0;
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
	private: int sort_step;
	private: System::Diagnostics::Stopwatch^ stop_timer;
	private: System::Windows::Forms::Label^ IsSortedLabel;
	private: System::Windows::Forms::Label^ PartialResultLabel;
	private: System::Windows::Forms::Label^ PartialResultOutputLabel;
	private: System::Windows::Forms::Label^ IndividualTaskLabel;
	private: System::Windows::Forms::Label^ IndividualTaskOutputLabel;


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
			this->PartialResultLabel = (gcnew System::Windows::Forms::Label());
			this->PartialResultOutputLabel = (gcnew System::Windows::Forms::Label());
			this->IndividualTaskLabel = (gcnew System::Windows::Forms::Label());
			this->IndividualTaskOutputLabel = (gcnew System::Windows::Forms::Label());
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
			this->ResultLabel->Location = System::Drawing::Point(200, 396);
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
			this->ResultSortedArrayLabel->Location = System::Drawing::Point(313, 396);
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
			this->CountTimerLabel->Location = System::Drawing::Point(64, 436);
			this->CountTimerLabel->Name = L"CountTimerLabel";
			this->CountTimerLabel->Size = System::Drawing::Size(0, 29);
			this->CountTimerLabel->TabIndex = 10;
			// 
			// IsSortedLabel
			// 
			this->IsSortedLabel->AutoSize = true;
			this->IsSortedLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->IsSortedLabel->Location = System::Drawing::Point(200, 396);
			this->IsSortedLabel->Name = L"IsSortedLabel";
			this->IsSortedLabel->Size = System::Drawing::Size(0, 29);
			this->IsSortedLabel->TabIndex = 11;
			// 
			// PartialResultLabel
			// 
			this->PartialResultLabel->AutoSize = true;
			this->PartialResultLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->PartialResultLabel->Location = System::Drawing::Point(200, 260);
			this->PartialResultLabel->Name = L"PartialResultLabel";
			this->PartialResultLabel->Size = System::Drawing::Size(152, 29);
			this->PartialResultLabel->TabIndex = 12;
			this->PartialResultLabel->Text = L"Partial result:";
			// 
			// PartialResultOutputLabel
			// 
			this->PartialResultOutputLabel->AutoSize = true;
			this->PartialResultOutputLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->PartialResultOutputLabel->Location = System::Drawing::Point(376, 260);
			this->PartialResultOutputLabel->Name = L"PartialResultOutputLabel";
			this->PartialResultOutputLabel->Size = System::Drawing::Size(0, 29);
			this->PartialResultOutputLabel->TabIndex = 13;
			// 
			// IndividualTaskLabel
			// 
			this->IndividualTaskLabel->AutoSize = true;
			this->IndividualTaskLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->IndividualTaskLabel->Location = System::Drawing::Point(200, 219);
			this->IndividualTaskLabel->Name = L"IndividualTaskLabel";
			this->IndividualTaskLabel->Size = System::Drawing::Size(170, 29);
			this->IndividualTaskLabel->TabIndex = 14;
			this->IndividualTaskLabel->Text = L"Individual task:";
			// 
			// IndividualTaskOutputLabel
			// 
			this->IndividualTaskOutputLabel->AutoSize = true;
			this->IndividualTaskOutputLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->IndividualTaskOutputLabel->Location = System::Drawing::Point(376, 219);
			this->IndividualTaskOutputLabel->Name = L"IndividualTaskOutputLabel";
			this->IndividualTaskOutputLabel->Size = System::Drawing::Size(0, 29);
			this->IndividualTaskOutputLabel->TabIndex = 15;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(708, 584);
			this->Controls->Add(this->IndividualTaskOutputLabel);
			this->Controls->Add(this->IndividualTaskLabel);
			this->Controls->Add(this->PartialResultOutputLabel);
			this->Controls->Add(this->PartialResultLabel);
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
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	// Quick Sort
	int partition(std::vector<int>& arr_in, int low, int high) {
		if (low < 0 || high < low) return low;

		// вибрати опору high - останій елемент
		int pivot = arr_in[high];


		int i = low - 1;

		//Обхід масиву arr[low..high-1] та переміщення всіх більших елементів за опору 
		// вправо (за спаданням) arr_in[j] > pivot
		// вліво (за зростанням) arr_in[j] < pivot
		for (int j = low; j < high; ++j) {
			if (arr_in[j] > pivot) {
				i++;
				swap(arr_in[i], arr_in[j]);
			}
		}

		// перемістити опору між "підмасивами", де зліва більші елементи, справа - менші
		swap(arr_in[i + 1], arr_in[high]);

		// вивід проміжного результату
		sort_step++;
		PartialResultOutputLabel->Text += "Step: " + Convert::ToString(sort_step) + " ";

			for (int k = 0; k < arr_in.size(); k++) {
				PartialResultOutputLabel->Text += " " + Convert::ToString(arr_in[k]);
			}
			PartialResultOutputLabel->Text += "\n";
		
		// повертає індекс на опору pivot
		return i + 1;
	}

	void quickSort(std::vector<int>& arr_in, int low, int high) {
		if (low < high) {
			int pi = partition(arr_in, low, high);

			//рекурсія
			quickSort(arr_in, low, pi - 1);
			quickSort(arr_in, pi + 1, high);
		}
	}

private: System::Void ArraySizeTextBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void GenRandNumButton_Click(System::Object^ sender, System::EventArgs^ e) {
		
	OutputArrayLabel->Text = "";
	IndividualTaskOutputLabel->Text = " ";

		if (!String::IsNullOrWhiteSpace(ArraySizeTextBox->Text)) {
			arr_size = Convert::ToInt32(ArraySizeTextBox->Text);
			if (arr_size <= 0) {
				MessageBox::Show("Enter size > 0!","Warning", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			}
		}

		srand(time(0));
		arr->clear();
		arr->reserve(arr_size);
		sort_step = 0;
		
		//заповнення випадковими числами
		for (int i = 0; i < arr_size;i++) {
			arr->push_back(rand() % 101);
			OutputArrayLabel->Text += " " + Convert::ToString((*arr)[i]);
		}

		//індивідуальне завдання. Все шо ділиться на 3 тікає, а інше підноситься до квадрату
		for (int i = 0; i < arr->size();) {
			if ((*arr)[i] % 3 == 0) {
				arr->erase(arr->begin()+i);
			}
			else {
				(*arr)[i] = (*arr)[i] * (*arr)[i];
				i++;
			}
			
		}

		//Вивід масиву після обробки індивідуального завдання
		for (int i = 0; i < arr->size(); i++) {
			IndividualTaskOutputLabel->Text += " " + Convert::ToString((*arr)[i]);
		}
		
}
private: System::Void SortArrayButton_Click(System::Object^ sender, System::EventArgs^ e) {
	
	ResultSortedArrayLabel->Text = "";
	PartialResultOutputLabel->Text = " ";
	stop_timer->Reset();

	stop_timer->Start();

	quickSort(*arr, 0, arr->size() - 1);

	stop_timer->Stop();
	
	
	//вивід часу + відсортованого масиву
	CountTimerLabel->Text = stop_timer->Elapsed.TotalMilliseconds.ToString("F6") + "ms";

	for (int i = 0; i < arr->size();i++) {
		ResultSortedArrayLabel->Text += " " + Convert::ToString((*arr)[i]);
	}
}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
