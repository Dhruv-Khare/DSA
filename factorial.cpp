#include<iostream>
using namespace std;
int fact(int n)
{
  if(n==0)
  return 1;
  else
  return n*fact(n-1);
}
int main()
{
  int N;
  cin>>N;
  int res=fact(N);
  cout<<res;
  return 0;
}