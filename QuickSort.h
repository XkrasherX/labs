#pragma once
#include <iostream>
#include <vector>

using namespace std;


int partition(std::vector<int>& arr_in,int low,int high) {
	if (low < 0 || high < low) return low;

	// вибрати опору high - останій елемент
	int pivot = arr_in[high];

	  int i = low - 1;

	//Обхід масиву arr[low..high-1] та переміщення всіх більших елементів за опору 
	// вправо (за спаданням) arr_in[j] > pivot
	// вліво (за зростанням) arr_in[j] < pivot
	for (  int j = low; j < high; ++j) {
		if (arr_in[j] < pivot) {
			i++;
			swap(arr_in[i], arr_in[j]);
		}
	}

	// перемістити опору між "підмасивами", де зліва більші елементи, справа - менші
	swap(arr_in[i + 1], arr_in[high]);

	// повертає індекс на опору pivot
	return i + 1;
}

void quickSort(std::vector<  int>& arr_in,   int low,   int high) {
	if (low < high) {
		  int pi = partition(arr_in, low, high);

		//рекурсія
		quickSort(arr_in, low, pi - 1);
		quickSort(arr_in, pi + 1, high);
	}
}
