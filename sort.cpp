#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
static bool cmp(int x,int y)
{
  if(x>y)
     return true;
  else
  return false;
}
int main()
{
  vector<int> arr;
  arr.push_back(5);
  arr.push_back(7);
  arr.push_back(10);
  arr.push_back(-7);
  arr.push_back(-2);


  sort(arr.begin(),arr.end(),cmp);
  for(int i=0;i<arr.size();i++)
  {
    cout<<arr[i]<<" ";
  }
}
