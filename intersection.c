#include <stdio.h>
void mergeArray(int a[], int b[], int n, int m)
{
    int c[m + n];
    int i = 0, j = 0, k = 0;
    while (i < n && j < m)
    {
        if (a[i] < b[j])
        {
            i++;
        }
        else if (a[i] > b[j])
        {
            j++;
        }
        else
        {
            c[k] = a[i];
            i++;
            j++;
            k++;
        }
    }
    while(i<n)
    {
        c[k]=a[i];
        i++;
        k++;
    }
    while(j<m)
    {
        c[k]=b[j];
        j++;
        k++;


    }
    traverse(c, k);
}
void traverse(int c[], int k)
{
    int i = 0;
    for (i = 0; i < k; i++)
    {
        printf("%d  ", c[i]);
    }
}
int main()
{
    int a[] = {4,9,5};
    int n = 3;
    int b[] = {9,4,9,8,4};
    int m = 5;
    mergeArray(a, b, n, m);
    return 0;
}
