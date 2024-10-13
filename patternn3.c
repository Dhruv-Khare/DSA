#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    char ch = 'A';
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= i; j++)
        {

            printf("%c", ch);
        }
        ch = ch + 1;
        printf("\n");
    }
    return 0;
}
