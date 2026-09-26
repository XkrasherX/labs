#include <time.h>
#include <stdlib.h>
#include <vector>
#include <stdio.h>
#include <algorithm>
#include <iterator>
#include <fstream>
#include <string>

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
			arr = new vector<string>();
			arr_rand = new vector<string>();
			arr_out = new vector<string>();
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
			if (arr_rand) {
				delete arr_rand;
				arr_rand = nullptr;
			}
			if (arr_out) {
				delete arr_out;
				arr_out = nullptr;
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
	private: vector<string>* arr;
	private: vector<string>* arr_rand;
	private: vector<string>* arr_out;
	private: System::Diagnostics::Stopwatch^ stop_timer;

	private: System::Windows::Forms::Label^ IndividualTaskLabel;
	private: System::Windows::Forms::Label^ IndividualTaskOutputLabel;
	private: System::Windows::Forms::Label^ PartialResultLabel;
	private: System::Windows::Forms::Label^ PartialResultOutputLabel;

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
			this->IndividualTaskLabel = (gcnew System::Windows::Forms::Label());
			this->IndividualTaskOutputLabel = (gcnew System::Windows::Forms::Label());
			this->PartialResultLabel = (gcnew System::Windows::Forms::Label());
			this->PartialResultOutputLabel = (gcnew System::Windows::Forms::Label());
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
			this->ResultLabel->Location = System::Drawing::Point(54, 553);
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
			this->ResultSortedArrayLabel->Location = System::Drawing::Point(167, 553);
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
			this->OutputArrayLabel->Location = System::Drawing::Point(325, 160);
			this->OutputArrayLabel->Name = L"OutputArrayLabel";
			this->OutputArrayLabel->Size = System::Drawing::Size(0, 29);
			this->OutputArrayLabel->TabIndex = 6;
			// 
			// SortArrayButton
			// 
			this->SortArrayButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->SortArrayButton->Location = System::Drawing::Point(36, 285);
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
			this->TimerLabel->Location = System::Drawing::Point(64, 423);
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
			this->CountTimerLabel->Location = System::Drawing::Point(47, 469);
			this->CountTimerLabel->Name = L"CountTimerLabel";
			this->CountTimerLabel->Size = System::Drawing::Size(0, 29);
			this->CountTimerLabel->TabIndex = 10;
			// 
			// IndividualTaskLabel
			// 
			this->IndividualTaskLabel->AutoSize = true;
			this->IndividualTaskLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->IndividualTaskLabel->Location = System::Drawing::Point(200, 219);
			this->IndividualTaskLabel->Name = L"IndividualTaskLabel";
			this->IndividualTaskLabel->Size = System::Drawing::Size(180, 29);
			this->IndividualTaskLabel->TabIndex = 6;
			this->IndividualTaskLabel->Text = L"Individual Task:";
			this->IndividualTaskLabel->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// IndividualTaskOutputLabel
			// 
			this->IndividualTaskOutputLabel->AutoSize = true;
			this->IndividualTaskOutputLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->IndividualTaskOutputLabel->Location = System::Drawing::Point(413, 219);
			this->IndividualTaskOutputLabel->Name = L"IndividualTaskOutputLabel";
			this->IndividualTaskOutputLabel->Size = System::Drawing::Size(0, 29);
			this->IndividualTaskOutputLabel->TabIndex = 6;
			// 
			// PartialResultLabel
			// 
			this->PartialResultLabel->AutoSize = true;
			this->PartialResultLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->PartialResultLabel->Location = System::Drawing::Point(200, 285);
			this->PartialResultLabel->Name = L"PartialResultLabel";
			this->PartialResultLabel->Size = System::Drawing::Size(152, 29);
			this->PartialResultLabel->TabIndex = 6;
			this->PartialResultLabel->Text = L"Partial result:";
			this->PartialResultLabel->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// PartialResultOutputLabel
			// 
			this->PartialResultOutputLabel->AutoSize = true;
			this->PartialResultOutputLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->PartialResultOutputLabel->Location = System::Drawing::Point(413, 285);
			this->PartialResultOutputLabel->Name = L"PartialResultOutputLabel";
			this->PartialResultOutputLabel->Size = System::Drawing::Size(0, 29);
			this->PartialResultOutputLabel->TabIndex = 6;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1023, 654);
			this->Controls->Add(this->CountTimerLabel);
			this->Controls->Add(this->TimerLabel);
			this->Controls->Add(this->SortArrayButton);
			this->Controls->Add(this->PartialResultOutputLabel);
			this->Controls->Add(this->IndividualTaskOutputLabel);
			this->Controls->Add(this->OutputArrayLabel);
			this->Controls->Add(this->PartialResultLabel);
			this->Controls->Add(this->IndividualTaskLabel);
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

		private: void Merge(vector<string>& X, vector<string>& Y, vector<string>& Z)
		{
			// X - лівий масив
			// Y - правий масив
			// Z - кінцевий результат


			//індекс для X
			int i = 0;
			//індекс для Y
			int j = 0;

			//поки розміри масивів більші за індекси
			while (i < X.size() && j < Y.size())
			{
				//якшо елемент правого масиву більше за лівий
				// в результат спочатку додається лівий
				//індекс лівого збільшується
				if (X[i] < Y[j])
				{
					Z.push_back(X[i]);
					i++;
				}
				//інакше правий елемент додається в кінцевий результат
				//збільшується індекс правого масиву
				else
				{
					Z.push_back(Y[j]);
					j++;
				}
			}

			//виконується поки індекс менший за розмір масиву
			//все шо не порівнялося в першому циклі, записується в кінець масиву
			while (i < X.size())
			{
				Z.push_back(X[i]);
				i++;
			}

			while (j < Y.size())
			{
				Z.push_back(Y[j]);
				j++;
			}
		}

		private: void MergeSort(vector<string>& arr)
		{
			//якшо масив < 1 тікає
			if (arr.size() <= 1)
				return;

			//середина масиву
			int mid = arr.size() / 2;
			
			//Х - масив arr від першого елемента до arr[mid]
			//Y - масив arr після arr[mid] і до кінця
			vector<string> X;
			vector<string> Y;

			//заповнення масиву X
			for (int i = 0; i < mid; i++)
				X.push_back(arr[i]);

			//заповнення масиву Y
			for (int i = mid; i < arr.size(); i++)
				Y.push_back(arr[i]);

			//рекурсія для обох масивів. Після рекурсії, масиви знову діляться навпіл
			//поки не буде розміру <= 1 (ввжаається відсортованим).
			MergeSort(X);
			MergeSort(Y);

			arr.clear();

			//злиття обох масивів у одне ціле, параметри: лівий, правий, куди
			Merge(X, Y, arr);

			for (int i = 0; i < arr.size(); i++) {
				PartialResultOutputLabel->Text += gcnew System::String(" ") + gcnew System::String(arr[i].c_str());
			}
			PartialResultOutputLabel->Text += "\n";
		}

		private: void readDataFromFile() {

				ifstream file("D:\\NYLP\\2k1s\\ASD\\labs\\lab3\\names.txt");
				string line;

				if (!file.is_open()) {
					return;
				}

				while (getline(file, line)) {
					arr->push_back(line);
				}

				file.close();

		}


private: System::Void ArraySizeTextBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void GenRandNumButton_Click(System::Object^ sender, System::EventArgs^ e) {
		
		if (!String::IsNullOrWhiteSpace(ArraySizeTextBox->Text)) {

			arr_size = Convert::ToInt32(ArraySizeTextBox->Text);
			if (arr_size <= 0) {
				MessageBox::Show("Enter size > 0!","Warning", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			}
		}

		//зчитати міста з файлу
		readDataFromFile();

		//очистити поля
		OutputArrayLabel->Text = "";
		IndividualTaskOutputLabel->Text = "";

		//підготувати масиви
		srand(time(0));
		arr_rand->clear();
		arr_out->clear();
		arr_rand->reserve(arr_size);
		arr_out->reserve(arr_size);

		//створення масиву + заповнення випадковими містами 
		for (int i = 0; i < arr_size;i++) {
			arr_rand->push_back((*arr)[rand() % arr->size()]);
			OutputArrayLabel->Text += gcnew System::String(" ") + gcnew System::String((*arr_rand)[i].c_str());
		
		}

		//якшо місто < 8 букв - попадає в основний масив
		for (int i = 0;i < arr_rand->size();i++) {
			string tmp = "";
			tmp = (*arr_rand)[i];
			if (tmp.length() < 8) {
				arr_out->push_back(tmp);
			}
		}
		//вивід основного масиву
		for (int i = 0; i < arr_out->size();i++) {
			IndividualTaskOutputLabel->Text += gcnew System::String(" ") + gcnew System::String((*arr_out)[i].c_str());
		}
						
}
private: System::Void SortArrayButton_Click(System::Object^ sender, System::EventArgs^ e) {
	
	ResultSortedArrayLabel->Text = "";
	PartialResultOutputLabel->Text = "";
	stop_timer->Reset();
	stop_timer->Start();

	//сортування
	MergeSort(*arr_out);

	stop_timer->Stop();
	
	
	//вивід часу
	CountTimerLabel->Text = stop_timer->Elapsed.TotalMilliseconds.ToString("F6") + "ms";

	//вивід відсортованого масиву
	for (int i = 0; i < arr_out->size();i++) {
		ResultSortedArrayLabel->Text += gcnew System::String(" ") + gcnew System::String((*arr_out)[i].c_str());
	}
	
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
