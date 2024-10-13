#include<iostream>
using namespace std;
int main()
{
  int r=3;
  int c=3;
  int a[r][c]={{1,2,3},{4,5,6},{7,8,9}};
  int b[r][c];
  //transpose
  for(int i=0;i<r;i++)
  {
    for(int j=0;j<c;j++)
    {
     b[j][i]=a[i][j];
    }
  }
  //rotate
  for(int j=0;j<r;j++)
  {
    int s=0;
    int e=c-1;
    while(s<e)
    {
      swap(b[s][j],b[e][j]);
      s++;
      e--;
    }
  }
  for(int i=0;i<c;i++)
  {
    for(int j=0;j<r;j++)
    
    {
      cout<<b[i][j]<<" ";
    }
    cout<<endl;
  }
  return 0;
}
