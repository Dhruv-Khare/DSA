#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
static bool cmp( pair<int,int> x, pair<int,int> y)
{
  if(x.second>y.second)
{
  return true;
}  
else{
  return false;
}
}
int main()
{
  vector<pair<int,int>> arr;
  arr.push_back({10,-2});
  arr.push_back({5,-4});
  arr.push_back({3,10});
  arr.push_back({1,-7});
  arr.push_back({20,-15});
 



  // sort(arr.begin(),arr.end(),cmp);
  // for(int i=0;i<arr.size();i++)
  // {
  //   cout<<arr[i].first<<" "<<arr[i].second<<" "<<'\n';
  // }
  sort(arr.begin(),arr.end(),cmp);
  for(int i=0;i<arr.size();i++)
  {
    cout<<arr[i].first<<" "<<arr[i].second<<" "<<'\n';
  }
}
