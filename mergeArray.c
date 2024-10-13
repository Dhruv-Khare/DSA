#include <stdio.h>
void mergeArray(int a[], int b[], int n, int m)
{
    int c[m + n];
    int i = 0, j = 0, k = 0;
    while (i < n && j < m)
    {
        if (a[i] < b[j])
        {
            c[k++] = a[i++];
        }
        else
        {
            c[k++] = b[j++];
        }
    }
    while (i < n)
    {
        c[k++] = a[i++];
    }
    while (j < m)
    {
        c[k++] = b[j++];
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
    int a[] = {5, 10, 15, 20, 25};
    int n = 5;
    int b[] = {2, 4, 12, 28, 60, 80};
    int m = 6;
    mergeArray(a, b, n, m);
    return 0;
}
