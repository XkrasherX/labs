#pragma once
#include <vector>
#include <chrono>
#include <algorithm>
#include "ShellSort.h"
#include "QuickSort.h"
#include "MergeSort.h"
#include "CountingSort.h"

double timedSort(int choice, std::vector<int>& v) {
	using clk = std::chrono::steady_clock;
	auto t0 = clk::now();
	switch (choice) {
	case 0: shellSort(v); break;
	case 1: quickSort(v, 0, (int)v.size() - 1); break;
	case 2: MergeSort(v); break;
	case 3: countingSort(v); break;
	}
	auto t1 = clk::now();
	return std::chrono::duration<double, std::milli>(t1 - t0).count();
}









void warmUp(int choice, const std::vector<int>& src, std::vector<int>& tmp) {
	const int warmRuns = (src.size() >= 1048576) ? 3 : 7;
	for (int r = 0; r < warmRuns; r++) {
		tmp = src;
		timedSort(choice, tmp); 
	}
}