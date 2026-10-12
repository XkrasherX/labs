#pragma once
#include <iostream>
#include <vector>

using namespace std;


int partition(vector<long long int>& arr, int low, long high)
{
    long pivot = arr[high];  
    int i = low;
    int j = high - 1;

    while (i <= j)
    {
        while (i <= j && arr[i] > pivot) { i++; }

        while (i <= j && arr[j] <= pivot) { j--; }

        if (i < j)
        {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }

    swap(arr[i], arr[high]);

    return i;
}

void quickSort(vector<long long int>& arr, int low, long high)
{
    if (low < high)
    {
        int pi = partition(arr, low, high);

        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}