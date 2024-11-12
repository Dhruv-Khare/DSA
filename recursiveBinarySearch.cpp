#include<bits/stdc++.h>
using namespace std;
int recbinarySearch(vector<int> v,int l,int h,int key)
{
  if(l<=h)
  {
    int mid=(l+h)/2;
    if(v[mid]==key)
    {
      return mid;
    }
    else
    {
      if(key<v[mid])
      {
        return recbinarySearch(v,l,mid-1,key);
      }
      else{
         return recbinarySearch(v,mid+1,h,key);
      }
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
  int key=1;
  sort(v.begin(),v.end());
  int res=recbinarySearch(v,0,n-1,key);
  cout<<res;
}