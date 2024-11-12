#include<bits/stdc++.h>
using namespace std;
int ISSearch(vector<int> v,int n,int x)
{
  
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
  int key=1;
  sort(v.begin(),v.end());
  int res=ISSearch(v,n,key);
  cout<<res;
}