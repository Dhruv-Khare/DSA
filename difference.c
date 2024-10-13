#include <stdio.h>
void diffArray(int a[], int b[], int n, int m)
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
            c[k] = b[j];
            j++;
            k++;
        }
        else
        {
            i++;
            j++;
        }
    }
    while (j < m)
    {
        c[k] = b[j];
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
    int a[] = {5, 10, 15, 20, 25};
    int n = 5;
    int b[] = {2, 5, 12, 20, 25, 60};
    int m = 6;
    diffArray(a, b, n, m);
    return 0;
}
