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
   cout<<"enter the end points of  edges:"<<endl;
   for(int i=1;i<=e;i++)
   {
      int a,b;
      cout<<"enter the end points of edge "<<i<<":";
      cin>>a>>b;
      adj[a].push_back(b);
      // adj[b].push_back(a);  for undirected graph
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

   
   vector<int>status(v,0);
   vector<int> distance(v,-1);
   vector<int>parent(v,0);
   queue<int>q;
   status[0]=1;
   distance[0]=0;
   q.push(0);
   cout<<"the order of bfs is:"<<endl;
   while(!q.empty())
   {
      int x=q.front();
      q.pop();
      // cout<<"Node: "<<x<<", Parent: "<<parent[x]<<", Distance: "<<distance[x]<<endl;
        for(int i=0;i<adj[x].size();i++){
            int p = adj[x][i];
            if(distance[p]==-1){
                distance[p]=distance[x]+1;
                parent[p]=x;
                q.push(p);
            }
        }

   }
      for(int i = 0; i<v;i++){
        cout << char(65+i) << ": " << distance[i] << ", " << char(65+parent[i]) <<endl;
        }

}
