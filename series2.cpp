#include<iostream>
using namespace std;
int main()
{
  int i,sum=0;
  int sign=1;
  int n;
  cin>>n;
  for(i=1;i<=n;i++)
  {
    sum=sum+i*i*sign;
    sign=sign*-1;
  }
  cout<<sum<<" ";
  return 0;
}