#include <time.h>
#include <stdlib.h>
#include <vector>
#include <stdio.h>
#include <algorithm>
#include <iterator>
#include <fstream>
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
			arr = new vector<vector<int>>();
			
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
	private: vector<vector<int>>* arr;
	
	private: System::Diagnostics::Stopwatch^ stop_timer;

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
			this->ResultLabel->Location = System::Drawing::Point(200, 378);
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
			this->ResultSortedArrayLabel->Location = System::Drawing::Point(313, 378);
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
			this->TimerLabel->Location = System::Drawing::Point(31, 473);
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
			this->CountTimerLabel->Location = System::Drawing::Point(47, 526);
			this->CountTimerLabel->Name = L"CountTimerLabel";
			this->CountTimerLabel->Size = System::Drawing::Size(0, 29);
			this->CountTimerLabel->TabIndex = 10;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(708, 584);
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
//функція для збереження матриці у файл
private: void saveDataToFile(ofstream& file, vector<vector<int>>& matrix) {
	for (int i = 0; i < matrix.size(); i++) {
		for (int j = 0; j < matrix[i].size(); j++) {
			file << matrix[i][j] << " ";
		}
		file << endl;
	}
}

//функція для підрахунку суми рядка
private: int rowSum(vector<int>& row) {
	int sum = 0;
	for (int i = 0;i < row.size();i++) {
		sum += row[i];
	}
	return sum;
}

//алгоритм сортування підрахунком
private: vector<vector<int>> countingSort(vector<vector<int>>& matrix) {
	
	ofstream file("D:\\NYLP\\2k1s\\ASD\\labs\\lab4\\sorting_result.txt");
	if (!file) {
		return matrix;
	}
	file << "Matrix: \n";
	saveDataToFile(file, matrix);

	//розмір масиву
	int n = matrix.size();

	if (!n) return matrix;

	//вектор для суми рядків
	vector<int> sum(n,0);

	//рахуємо суму кожного рядка
	file << "\nSum: \n";
	for (int i = 0; i < n; i++) {
		sum[i] = rowSum(matrix[i]);
		file << sum[i] << " ";
	}

	int maxSum = 0;

	//знаходимо максимальну суму рядка
	for (int i = 0; i < n; i++) {
		maxSum = max(maxSum, sum[i]);
	}

	file << "\nMax Sum: " << maxSum << "\n";
	
	//вектор для підрахунку того, скільки разів зустрічається кожне число в масиві
	vector<int> count(maxSum + 1, 0);


	//підраховуємо кількість кожної суми
	//цей цикл дає зрозуміти скільки разів число зустрічалося в масиві
	for (int i = 0; i < n; i++) {
		count[sum[i]]++;
	}

	//виводимо масив count після підрахунку
	file << "\nArray count: \n";

	for (int i = 0; i <= maxSum; i++) {
		if (count[i] != 0) {
			file << "Sum " << i << ": " << count[i] << endl;
		}
	}

	file << endl;

	//префіксні суми
	for (int i = 1; i <= maxSum; i++) {
		count[i] += count[i - 1]; //скільки всього елементів мають значення, яке <= i
	}

	file << "\nArray count after prefix sum:" << endl;

	for (int i = 0; i <= maxSum; i++) {
		if (count[i] != 0) {
			file << i << ": " << count[i] << endl;
		}
	}

	file << endl;


	vector<vector<int>> result(n);
	
	//формуємо результат. Починаємо з кінця шоб однакові значення зберегли свій порядок
	for (int i = n - 1; i >= 0; i--) {
		//індекс куди вставити рядок
		int index = count[sum[i]] - 1;

		//перенесення всього рядка в результат
		result[index] = matrix[i];
		//індекс має зміститися на 1 позицію лівіше
		count[sum[i]]--;

		file << "row " << i + 1	<< ") Sum = " << sum[i] << ") position " << index + 1 << endl;
	}

	file << "\nResult: \n";
	saveDataToFile(file, result);

	file.close();
	return result;
}

private: System::Void ArraySizeTextBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}


private: System::Void GenRandNumButton_Click(System::Object^ sender, System::EventArgs^ e) {
		OutputArrayLabel->Text = "";

		if (!String::IsNullOrWhiteSpace(ArraySizeTextBox->Text)) {
			arr_size = Convert::ToInt32(ArraySizeTextBox->Text);
			if (arr_size <= 0) {
				MessageBox::Show("Enter size > 0!","Warning", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				return;
			}
		}

		srand(time(0));
		arr->clear();
		arr->assign(arr_size, vector<int>(arr_size));

		//створення масиву + заповнення випадковими числами
		for (int i = 0; i < arr->size();i++) {
			for (int j = 0; j < arr->size();j++) {
				(*arr)[i][j] = (rand() % 6);
			OutputArrayLabel->Text += " " + Convert::ToString((*arr)[i][j]);
			}
			OutputArrayLabel->Text += "\n";
		}
}

private: System::Void SortArrayButton_Click(System::Object^ sender, System::EventArgs^ e) {
	
	ResultSortedArrayLabel->Text = "";
	stop_timer->Reset();
	stop_timer->Start();

	(*arr) = countingSort(*arr);

	stop_timer->Stop();
	
	CountTimerLabel->Text = stop_timer->Elapsed.TotalMilliseconds.ToString("F6") + "ms";

	for (int i = 0; i < arr->size();i++) {
		for (int j = 0; j < arr->size();j++) {
			ResultSortedArrayLabel->Text += " " + Convert::ToString((*arr)[i][j]);
		}
		ResultSortedArrayLabel->Text += "\n";
	}

}
};
}
