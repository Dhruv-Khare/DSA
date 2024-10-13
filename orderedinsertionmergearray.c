#include <stdio.h>
void arrayinsert(int a[], int n, int i, int x)
{
    for (int j = n - 1; j > 1; j++)
    {
        a[j + 1] = a[j];
    }
    a[i] = x;
    n = n + 1;
}
void orderedInsertion(int a[], int n, int x)
{
    int i = 0;
    while (i < n && x > a[i])
    {
        i++;
        arrayinsert(a, n, i, x);
    }
}
int main()
{
    int a[] = {2, 4, 6, 10, 12};
    int n = 5;
    int x;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &x);
        orderedInsertion(a, n, x);
    }
    return 0;
}