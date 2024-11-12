#include<bits/stdc++.h>
using namespace std;
int binarySearch(vector<int> v,int n,int key)
{
  sort(v.begin(),v.end());
  int l=0,h=n-1;
  while(l<=h)
  {
    int mid=(l+h)/2;
    if(v[mid]==key)
    {
      return mid;
    }
    else{
      if(key<v[mid])
         h=mid-1;
      else
        l=mid+1;
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
  int res=binarySearch(v,n,key);
  cout<<res;
}