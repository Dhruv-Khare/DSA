#include<bits/stdc++.h>
using namespace std;
int linearSearch(vector<int> v,int n,int key)
{
  for(int i=0;i<n;i++)
  {
    if(v[i]==key)
    {
      return i;
    }
  }
  return -1;
}
int main()
{
  vector<int> v;
  v.push_back(2);
  v.push_back(10);
  v.push_back(12);
  v.push_back(20);
  v.push_back(7);
  v.push_back(9);
  v.push_back(10);
  v.push_back(80);
  v.push_back(20);
  v.push_back(27);
  int n=v.size();
  int key=20;
  int res=linearSearch(v,n,key);
  cout<<res;
}