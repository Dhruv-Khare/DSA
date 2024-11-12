#include<bits/stdc++.h>
using namespace std;
bool isPrime(int n)
{
    if(n<=1)
     return false;
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    return true;
}
    int countPrimes(int n) {
        if(n<=2)
          return 0;
        int c=0;
        for(int i=2;i<n;i++)
        {
            if(isPrime(i))
            {
                c++;
            }
        }
        return c;
        
    }
int main()
{
  int n=500;
  int c=countPrimes(n);
  cout <<c;
}