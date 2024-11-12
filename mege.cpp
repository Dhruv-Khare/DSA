#include<iostream>
#include<vector>
using namespace std;

void traverse(int a[], int n) {
    for(int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl; // Added for better output formatting
} 

void mergeArray(int a[], int low, int mid, int high) {
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

void mergeSort(int a[], int low, int high) {
    if(low < high) {
        int mid = (low + high) / 2;
        mergeSort(a, low, mid);
        mergeSort(a, mid + 1, high);
        mergeArray(a, low, mid, high);
    }
}

int main() {
    int a[10] = {20, 30, 40, 12, 15, 10, 16, 20, 50, 90};
    mergeSort(a, 0, 9);
    traverse(a, 10); 
    return 0;
}
