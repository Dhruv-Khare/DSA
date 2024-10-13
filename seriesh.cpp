#include<iostream>
using namespace std;
int main(){
  int i;
  float sum=1;
int x;
cin>>x;
  int n;
  cin>>n;
  int num=x;
  float f=1;
  for(i=1;i<=n-1;i++)
  {
    f=f*i;
    sum=sum+num/f;
    num=num*x;
   
  }
  cout<<sum<<' ';
}