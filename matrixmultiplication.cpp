#include<iostream>
using namespace std;
int main()
{
   int a[10][10],b[10][10],c[10][10],i,j,k,m,n,p,q;
   cout<<"enter order of matrix a ";
   cin>>m>>n;
   cout<<"enter elements of matrix a";
   for(i=0;i<m;i++)
   {
    for(j=0;j<n;j++)
    {
      cin>>a[i][j];
    }
   } 
   cout<<"enter order of matrix b";
   cin>>p>>q;
   cout<<"enter elements of matrix b";
   for(i=0;i<p;i++)
   {
    for(j=0;j<q;j++)
    {
      cin>>b[i][j];
    }
   }
   //multiplicaion
   for(i=0;i<m;i++)
   {
    for(j=0;j<q;j++)
    {
      c[i][j]=0;
      for(k=0;k<n;k++)
      {
        c[i][j]=c[i][j]+(a[i][k]*b[k][j]);
      }
    }
   }
   //print final matrix 
   for(int i=0;i<m;i++)
   {
    for(j=0;j<q;j++)
    {
      cout<<c[i][j];
    }
    cout<<endl;
   }
   return 0;
}