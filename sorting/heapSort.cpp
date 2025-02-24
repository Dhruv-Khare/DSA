#include<bits/stdc++.h>
using namespace std;
void maxHeapify(vector<int> & v,int i,int N)
{
  while(2*i<=N)
  {
    int l=2*i;
    int r=2*i+1;
    int m=l;
    if(r<=N)
    {
      if(v[r]>v[l])
      {
        m=r;
      }
    }
    if(v[m]>v[i])
    {
      swap(v[m],v[i]);
    }
    else
    {
      break;
    }
    i=m;
  }
}
void buildMaxHeap(vector<int> &v,int N)
{
  for(int i=N/2;i>=1;i--)
  {
    maxHeapify(v,i,N);
  }
}
void heapSort(vector<int> & v,int N)
{
  buildMaxHeap(v,N);
  int j=N;
  while(j>=2)
  {
    swap(v[1],v[j]);
    j--;
    maxHeapify(v,1,j);
  }
}
int main()
{
  vector<int> v={0,4,1,3,2,16,9,10,14,8,7};
  heapSort(v,v.size()-1);
  for(int i=1;i<v.size();i++)
  {
    cout<<v[i]<<" ";
  }

}