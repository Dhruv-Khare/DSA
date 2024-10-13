#include <stdio.h>
void reverseArray(int arr[], int N, int k)
{
    int i = N;
    int j = k;
    while (i < j)
    {
        int t = arr[i];
        arr[i] = arr[j];
        arr[j] = t;
        i++;
        j--;
    }
}
void arrayTraversal(int arr[], int N)
{
    for (int i = 0; i < N; i++)
    {
        printf("%d ", arr[i]);
    }
}
void rotateArrayMethod1(int arr[], int N, int k)
{
    reverseArray(arr, N - k, N - 1);
    reverseArray(arr, 0, N - k - 1);
    reverseArray(arr, 0, N - 1);
    arrayTraversal(arr, N);
}
int main()
{
    int arr[3] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int k = 4;
    rotateArrayMethod1(arr, 10, k);
    return 0;
}
