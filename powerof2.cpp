#include<iostream>
using namespace std;
int ispowerof2(int n)
{
  if(n==0)
  return 0;
  if(n==1)
  return 1;
  if(n%2==0)
  return ispowerof2(n/2);
  else
  return 0;
}
int main()
{
  int n;
  cin>>n;
  int res=ispowerof2(n);
  res==1?cout<<"yes":cout<<"flase";
}