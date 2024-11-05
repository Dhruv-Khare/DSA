// #include <iostream>
// #include <vector>
// #include <chrono>
// #include <cstdlib>
// #include <ctime>
#include<bits/stdc++.h>
using namespace std;

void generateRandomArray(vector<int>& arr, int n) {
    srand(time(0));
    for (int i = 0; i < n; ++i) {
        arr.push_back(rand() % 1000000);
    }
}

void bubbleSort(vector<int> arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

void selectionSort(vector<int> arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; ++i) {
        int minIndex = i;
        for (int j = i + 1; j < n; ++j) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);
    }
}

void insertionSort(vector<int> arr) {
    int n = arr.size();
    for (int i = 1; i < n; ++i) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

int main() {
    int n = 500000;
    vector<int> arr;
    generateRandomArray(arr, n);

    auto bubbleArr = arr;
    auto start = chrono::high_resolution_clock::now();
    bubbleSort(bubbleArr);
    auto end = chrono::high_resolution_clock::now();
    chrono::duration<double> bubbleSortTime = end - start;
    cout << "Bubble Sort Time: " << bubbleSortTime.count() << " seconds" << endl;

    auto selectionArr = arr;
    start = chrono::high_resolution_clock::now();
    selectionSort(selectionArr);
    end = chrono::high_resolution_clock::now();
    chrono::duration<double> selectionSortTime = end - start;
    cout << "Selection Sort Time: " << selectionSortTime.count() << " seconds" << endl;

    auto insertionArr = arr;
    start = chrono::high_resolution_clock::now();
    insertionSort(insertionArr);
    end = chrono::high_resolution_clock::now();
    chrono::duration<double> insertionSortTime = end - start;
    cout << "Insertion Sort Time: " << insertionSortTime.count() << " seconds" << endl;

    return 0;
}
