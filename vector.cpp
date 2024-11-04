#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void myfunction(vector<int>&v)
{

sort(v.begin(),v.end());
for(int i=0;i<v.size();i++)
{
  cout<<v[i]<<' ';
}

cout<<'\n';
reverse(v.begin()+2,v.end());
for(int i=0;i<v.size();i++)
{
  cout<<v[i]<<' ';
}
}
int main()
{
//   // int n;
//   // cin>>n;

//   //  vector<int>v(n,-1);  //default initialize as 0
//   // v.push_back(1);
//   // v.push_back(2);
//   // v.push_back(3);
//   // v.push_back(4);

//   // for(int i=0;i<v.size();i++)
//   // {
//   //   cout<<v[i]<<'\t';
//   // }
// // ********************************************
// //2d vector
// // vector<vector<int>>v(3,vector<int>(4,2));
// //   int m=v.size();
// //   int n=v[0].size();
// //   for(int i=0;i<m;i++)
// //   {
// //     for(int j=0;j<n;j++)
// //     {
// //       cout<<v[i][j]<<" ";
// //     }
// //     cout<<'\n';
// //   }


vector<int>v;
v.push_back(2);
v.push_back(10);
v.push_back(1);
v.push_back(5);
v.push_back(6);
v.push_back(3);
v.push_back(5);
v.push_back(3);
// sort(v.begin(),v.end());
// for(int i=0;i<v.size();i++)
// {
//   cout<<v[i]<<' ';
// }

// cout<<'\n';
// reverse(v.begin()+2,v.end());
// for(int i=0;i<v.size();i++)
// {
//   cout<<v[i]<<' ';
// }

myfunction(v);
int m=100;
int n=500;
cout<<'\n';
swap(m,n);
cout<<m<<' '<<n;
int x=min(m,n);
cout<<'\n'<<x;
cout<<'\n'<<max(m,n);
return 0;
}