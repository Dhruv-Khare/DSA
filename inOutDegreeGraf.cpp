#include<bits/stdc++.h>
using namespace std;
int main()
{
  int v,e;
  cout<<"enter the numbetr of vertices:";
  cin>>v;
  cout<<"enter the number of edges:";
   cin>>e;
   vector<int> adj[v];
   vector<int> dat(v,0);// to strore Indegrees of vertices
   cout<<"enter the end points of  edges:"<<endl;
   for(int i=1;i<=e;i++)
   {
      int a,b;
      cout<<"enter the end points of edge "<<i<<":";
      cin>>a>>b;

      adj[a].push_back(b);
      // adj[b].push_back(a);  for undirected graph
      dat[b]++;//for indegree
   }
   cout<<"adjacency list of the graph is:"<<endl;
   for(int i=0;i<v;i++)
   {
      cout<<i<<" ";
      for(int x:adj[i])
      {
        cout<<"->"<<x;
      }
      cout<<endl;
   }
   cout<<'\n'<<"OutDegrees are :";
   //OutDegree
   for(int i=0;i<v;i++)
   {
    cout<<i<<":"<<adj[i].size()<<" \n";
   }
   for(int i=0;i<v;i++)
   {
    cout<<i<<':'<<dat[i]<<'\n';
   }
}