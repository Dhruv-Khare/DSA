#include<bits/stdc++.h>
using namespace std;
int w[100][100];
int d[100][100];
int mini(int x,int y)
{
   if(x<y)
   {
    return x;
   }
   else 
    return y;
}
int main()
{
  int n;
  cout<<"enter the number of vertices:";
  cin>>n;
  cout<<"enter the weighted matrices:";
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<n;j++)
    {
      cin>>w[i][j];
      if(i!=j)
      {
        if(w[i][j]==0)
        d[i][j]=INT_MAX/2;
        else 
        d[i][j]=w[i][j];
      }
      else
      {w[i][j]=0;}
    }
  }
  for(int k=0;k<n;k++)
  {
    for(int i=0;i<n;i++)
    {
      for(int j=0;j<n;j++)
      {
        d[i][j]=min(d[i][j],d[i][k]+d[k][j]);
      }
    }
  }
 cout<<"the distance matrix is as follows\n";
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<n;j++)
    {
      cout<<d[i][j]<<" ";
    }
    cout<<'\n';
  }

}