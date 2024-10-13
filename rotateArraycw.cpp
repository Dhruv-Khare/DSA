#include<iostream>
using namespace std;
int main()
{
  int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
  int b[3][3];
  //transpose
  for(int i=0;i<3;i++)
  {
    for(int j=0;j<3;j++)
    {
     b[j][i]=a[i][j];
    }
  }
  //rotate
  for(int i=0;i<3;i++)
  {
    int s=0;
    int e=2;
    while(s<e)
    {
      swap(b[i][s],b[i][e]);
      s++;
      e--;
    }
  }
  for(int i=0;i<3;i++)
  {
    for(int j=0;j<3;j++)
    {
      cout<<b[i][j]<<" ";
    }
    cout<<endl;
  }
  return 0;
}
