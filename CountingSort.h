#pragma once
#include <iostream>
#include <vector>

using namespace std;

vector<long long int> countsort(vector<long long int>& arr) {
    int n = arr.size();

    // find the maximum element
    long long int maxval = 0;
    for (int i = 0; i < n; i++)
        maxval = max(maxval, arr[i]);

    // create and initialize cntArr array
    vector<long long int> cntArr(maxval + 1, 0);

    // count frequency of each element
    for (int i = 0; i < n; i++)
        cntArr[arr[i]]++;

    // compute prefix sum
    for (int i = 1; i <= maxval; i++)
        cntArr[i] += cntArr[i - 1];

    // build output array
    vector<long long int> ans(n);
    for (int i = n - 1; i >= 0; i--) {
        ans[cntArr[arr[i]] - 1] = arr[i];
        cntArr[arr[i]]--;
    }
    
    return ans;
}