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


void mergeArray(vector<int>& a, int low, int mid, int high) {
    vector<int> c(high - low + 1);
    int i = low, j = mid + 1, k = 0; // Start k from 0
    while(i <= mid && j <= high) {
        if(a[i] < a[j]) {
            c[k++] = a[i++];
        } else {
            c[k++] = a[j++];
        }
    }
    while(i <= mid) {
        c[k++] = a[i++];
    }
    while(j <= high) {
        c[k++] = a[j++];
    }
    
    for(int i =low; i <= high; i++) {
        a[i] = c[i-low];
    }
}

void mergeSort(vector<int>& a, int low, int high) {
    if(low < high) {
        int mid = (low + high) / 2;
        mergeSort(a, low, mid);
        mergeSort(a, mid + 1, high);
        mergeArray(a, low, mid, high);
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
    int no = 50000000;
    vector<int> arr;
    generateRandomArray(arr, no);

    // auto bubbleArr = arr;
    // auto start = chrono::high_resolution_clock::now();
    // bubbleSort(bubbleArr);
    // auto end = chrono::high_resolution_clock::now();
    // chrono::duration<double> bubbleSortTime = end - start;
    // cout << "Bubble Sort Time: " << bubbleSortTime.count() << " seconds" << endl;

//     auto selectionArr = arr;
//     auto start = chrono::high_resolution_clock::now();
//     selectionSort(selectionArr);
//    auto end = chrono::high_resolution_clock::now();
//     chrono::duration<double> selectionSortTime = end - start;
//     cout << "Selection Sort Time: " << selectionSortTime.count() << " seconds" << endl;

//     auto insertionArr = arr;
//     start = chrono::high_resolution_clock::now();
//     insertionSort(insertionArr);
//     end = chrono::high_resolution_clock::now();
//     chrono::duration<double> insertionSortTime = end - start;
//     cout << "Insertion Sort Time: " << insertionSortTime.count() << " seconds" << endl;

    auto mergeArr = arr;
    int n=mergeArr.size();
   auto start = chrono::high_resolution_clock::now();
    mergeSort(mergeArr,0,n-1);
   auto end = chrono::high_resolution_clock::now();
    chrono::duration<double> mergeSortTime = end - start;
    cout << "merge Sort Time: " << mergeSortTime.count() << " seconds" << endl;

    return 0;
}
