#include <stdio.h>
long long int m=10000000+7;
 int power( int a,  int n)
{
  
     int x = power(a, n / 2)%m;
    if (n % 2 == 0)
      return (x * x)%m;
    else
      return ((a * x)%m * x)%m;
  }

int main()
{
   int a, n;
  scanf("%d%d", &a, &n);
   int x = power(a, n);
  printf("%d", x);
}