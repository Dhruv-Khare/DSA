#include <bits/stdc++.h>
using namespace std;
int nearest_prime(int ts)
{
  int i = 0, j = 0;
  int flag = 0;
  for (i = ts; i >= 2; i++)
  {
    for (j = 2; j < sqrt(i); j++)
    {
      if (i % j == 0)
      {
        break;
      }
    }
    if (j > sqrt(i))
      return i;
  }
  if (flag == 0)
  {
    return 0;
  }
  else
  {
    return 1;
  }
}
int divisionHash(int key, int ts)
{
  int np = nearest_prime(ts);
  int l = key % np;
  return l;
}
int digitCount(int n)
{
  int c = 0;
  while (n != 0)
  {
    c++;
    n = n / 10;
  }
  return c;
}
int midSquareHash(long long n, int ts)
{
  int d = digitCount(ts - 1);
  cout << d << " ";
  int l = digitCount(n);
  cout << l << " ";
  int e = (2 * l - d) / 2;
  int r = pow(10, e);
  cout << r << ' ';
  n = (n * n) / r;
  cout << n << " ";
  int mod = int(pow(10, d) + 0.5);
  cout << mod << ' ';
  return (n) % mod;
}
int main()
{
  // cout<<divisionHash(12,100)<<endl;
  // cout<<divisionHash(2738,100)<<endl;
  // cout<<divisionHash(6979,100)<<endl;
  cout << midSquareHash(1234, 100) << endl;
  // cout<<midSquareHash(5469,100)<<endl;
}