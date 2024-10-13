#include<iostream>
using namespace std;
int main(){
  int i;
double  x;
cin>>x;
double rad=(x/180)*22/7;
  double sum=rad;
  int n;
  int sign=-1;
  cin>>n;
  int num=rad;
  int  f=1;
  for(i=1;i<n;i++)
  {
  num=num*rad*rad;
   f=f*(2*i)*(2*i-1);
    sum=sum+num/f*sign;
     
    
    sign=sign*-1;
   
  }
  cout<<sum<<' ';
}