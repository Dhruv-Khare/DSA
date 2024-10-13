#include<iostream>
using namespace std;
int main(){
  int i;
  float sum=1;

  int n;
  cin>>n;
  int num=1;
  int sign=-1;
  float f=1;

  for(i=1;i<=n;i++)
  {
    
    sum=sum+num/f*sign;
    f=f*(2*i)*(2*i+1);
    num=num+1;
    sign=sign*-1;
   
  }
  cout<<sum<<' ';
}