#include<iostream>
using namespace std;
int main(){
  int i,sum=0;
  int f=1;
  int n;
  int sign=1;
  cin>>n;
  for(i=1;i<=n;i++)
  {
    f=f*i;
    sum=sum+f*sign;
    sign=sign*-1;
  }
  cout<<sum<<' ';
}