#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
vector<int> countingSort(vector<int> a,int n,int k)
{
   vector<int> c(k+1,0);
   vector<int> b(n);
   for(int i=0;i<n-1;i++)
   {
    c[a[i]]++;
   }
    for(int i=1;i<=k;i++)
    {
      c[i]=c[i]+c[i-1];
    }
    for(int j=n-1;j>0;j--)
    {
       b[c[a[j]]-1]=a[j];
       c[a[j]]--;
    }
    return b; 
}
int main()
{
  vector<int> arr;
  arr.push_back(6);
  arr.push_back(3);
  arr.push_back(1);
  arr.push_back(2);
  arr.push_back(6);
  arr.push_back(2);
  arr.push_back(3);
  arr.push_back(4);
  arr.push_back(3);
  arr.push_back(6);
  int k=*max_element(arr.begin(),arr.end());
  vector<int> ans=countingSort(arr,10,k);
  for(int i=0;i<ans.size()-1;i++)
  {
      cout<<ans[i]<<" ";
  }
}