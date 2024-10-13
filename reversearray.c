#include <stdio.h>
void reverseArray(int a[], int n)
{
    int i = 0;
    int j = n - 1;
    while (i < j)
    {
        int c = a[i];
        a[i] = a[j];
        a[j] = c;
        i++;
        j--;
    }
    traverse(a, n);
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
    int a[] = {2, 4, 10, 12, 15, 20};
    int n = 6;
    reverseArray(a, n);
    return 0;
}
