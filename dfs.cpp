#include<bits/stdc++.h>
using namespace std;
void dfs_visit(vector<int> Adj[],vector<int>&status,int i)
{
  status[i]=1;
  cout<<i<<'\t';
  for(int j=0;j<Adj[i].size();j++)
  {
    if(status[Adj[i][j]]==0)
    {
      dfs_visit(Adj,status,Adj[i][j]);
    }
  }
}
void dfs(vector<int> Adj[],int n)
{
  int c=0;
  vector<int> status(n,0);
  for(int i=0;i<n;i++)
  {
    if(status[i]==0)
    {
      c++;
      dfs_visit(Adj,status,i);
    }
  }
  cout<<"The number of connected components:"<<c<<'\n';
}
int main()
{
  int n,e,i,a,b;
  cout<<"enetr the number of vertices:";
  cin>>n;
  vector<int> Adj[n];
  cout<<"enter the number of edges:";
  cin>>e;
  for(int i=1;i<=e;i++)
  {
    cout<<"enetr the en points of edges:";
    cin>>a>>b;
    Adj[a].push_back(b);
    Adj[b].push_back(a);
  }
  for(int i=0;i<n;i++)
  {
    cout<<i<<": ";
    for(int j=0;j<Adj[i].size();j++)
    {
      cout<<Adj[i][j]<<',';
    }
    cout<<'\n';
  }
  cout<<'\n';
    cout<<"order of dfs is:";
    dfs(Adj,n);
    return 0;
}