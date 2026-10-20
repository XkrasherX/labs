#pragma once
#include <iostream>
#include <vector>
 
using namespace std;

void shellSort(vector<int>& arr) {
	int size = arr.size();
	for (int gap = size / 2; gap > 0; gap /= 2) {
		for (int i = gap; i < size; i++) {

			int temp = arr[i];
			int j = i;

			while (j >= gap && arr[j - gap] > temp) {
				arr[j] = arr[j - gap];
				j -= gap;
			}
			arr[j] = temp;
		}
	}
}