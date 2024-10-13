#include<iostream>
using namespace std;
int main(){
  int i;
  float sum=0;

  int n;
  cin>>n;
  int num=1;
  float f=1;
  for(i=1;i<=n;i++)
  {
    f=f*i;
    sum=sum+num/f;
    num=num+1;
   
  }
  cout<<sum<<' ';
}