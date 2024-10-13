#include<iostream>
using namespace std;
int main(){
  int i;
  float sum=1;
int x;
cin>>x;
  int n;
  int sign=-1;
  cin>>n;
  int num=x;
  float f=1;
  for(i=1;i<=n-1;i++)
  {
    f=f*i;
    sum=sum+num/f*sign;
    num=num*x;
    sign=sign*-1;
   
  }
  cout<<sum<<' ';
  
}