#include<iostream>
using namespace std;
int main()
{
  int i,sum=0,n;
  cin>>n;
  for( i=1;i<=n;i++)
  {
    sum=sum+i*i;
  }
  cout<<sum<<" ";
  return 0;
}