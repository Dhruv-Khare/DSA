#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
static bool cmp(int x,int y)
{
  if(x%2!=0&&y%2!=0)
  {
    return x>y;
  }
  else if(x%2==0&&y%2==0)
  {
    return x<y;
  }
  else if(x%2!=0&& y%2==0)
  {
    return true;
  }
  else{
    return false;
  }
}
int main()
{
  vector<int> arr;
  arr.push_back(12);
  arr.push_back(7);
  arr.push_back(6);
  arr.push_back(3);
  arr.push_back(90);
  arr.push_back(11);
  arr.push_back(30);
  arr.push_back(51);
  arr.push_back(40);



  sort(arr.begin(),arr.end(),cmp);
  for(int i=0;i<arr.size();i++)
  {
    cout<<arr[i]<<" ";
  }
}
