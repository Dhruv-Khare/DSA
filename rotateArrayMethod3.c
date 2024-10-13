#include <stdio.h>
void arrayTraversal(int arr[], int N)
{
    for (int i = 0; i < N; i++)
    {
        printf("%d ", arr[i]);
    }
}
void rotateArrayMethod3(int arr[], int N, int k)
{
    int temp[k];
    for (int i = 0; i < k - 1; i++)
    {
        temp[i] = arr[N - k + i];
    }
    for (int j = 0; j < N - k - 1; j++)
    {
        arr[j + k] = arr[j];
    }
    for (int m = 0; m < k - 1; m++)
    {
        arr[m] = temp[m];
    }
    arrayTraversal(arr, N);
}
int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int k = 4;
    rotateArrayMethod3(arr, 10, k);
    return 0;
}
