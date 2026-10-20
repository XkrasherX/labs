#pragma once
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void countingSort(vector<int>& arr) {

	int n = arr.size();
	int max = *max_element(arr.begin(), arr.end());
	int min = *min_element(arr.begin(), arr.end());
	int range = max - min + 1;
	vector<int> count(range, 0);
	for (int i = 0; i < n; i++) {
		count[arr[i] - min]++;
	}
	for (int i = 1; i < range; i++) {
		count[i] += count[i - 1];
	}
	vector<int> output(n);
	for (int i = n - 1; i >= 0; i--) {
		output[--count[arr[i] - min]] = arr[i];
	}
	for (int i = 0; i < n; i++) {
		arr[i] = output[i];
	}
}