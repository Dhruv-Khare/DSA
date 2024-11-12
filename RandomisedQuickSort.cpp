#include<bits/stdc++.h>
using namespace std;
int partition(vector<int> &a,int low,int high)
{ 
 int x = low + rand() % (high - low + 1);
  swap(a[x],a[low]);
  int pivot=a[low];
  int i=low;
  int j=high+1;
  do{
    do{
      i++;
    }
    while(a[i]<pivot);
    do{
      j--;
    }
    while(a[j]>pivot);
    if(i<j)
    {
      swap(a[i],a[j]);
    }
  }
  while(i<j);

  swap(a[low],a[j]);
  return j;
}
void quicksort(vector<int> &a,int low,int high)
{
  if(low<high)
  {
    int j=partition(a,low,high);
    quicksort(a,low,j-1);
    quicksort(a,j+1,high);
  }
}
void traverse(vector<int> &a)
{
  int n=a.size();
  for(int i=0;i<n-1;i++)
  {
    cout<<a[i]<<" ";
  }
}
int main()
{


  vector<int> a;
  
  a.push_back(50);
  a.push_back(60);
  a.push_back(20);
  a.push_back(140);
  a.push_back(30);
  a.push_back(15);
  a.push_back(80);
  a.push_back(10);
  a.push_back(100);
  a.push_back(INT_MAX);
  int n=a.size();
  
  quicksort(a,0,n-1);
  traverse(a);
}