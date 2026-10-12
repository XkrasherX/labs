#pragma once
#include <iostream>
#include <vector>
 
using namespace std;

void shellSort(vector<long long int>& arr) {
	long size = arr.size();
	for (long gap = size / 2; gap > 0; gap /= 2) {
		for (long i = gap; i < size; i++) {

			long temp = arr[i];
			long j = i;

			while (j >= gap && arr[j - gap] < temp) {
				arr[j] = arr[j - gap];
				j -= gap;
			}
			arr[j] = temp;
		}
	}
}