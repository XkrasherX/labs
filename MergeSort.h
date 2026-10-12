#pragma once
#include <iostream>
#include <vector>

using namespace std;

void Merge(vector<long long int>& X, vector<long long int>& Y, vector<long long int>& Z)
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

		if (X[i] > Y[j])
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

void MergeSort(vector<long long int>& arr)
{
	//якшо масив < 1 тікає
	if (arr.size() <= 1)
		return;

	//середина масиву
	int mid = arr.size() / 2;

	//Х - масив arr від першого елемента до arr[mid]
	//Y - масив arr після arr[mid] і до кінця
	vector<long long int> X;
	vector<long long int> Y;

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

}
