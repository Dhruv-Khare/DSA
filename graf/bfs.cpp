#include <bits/stdc++.h>
using namespace std;
int main()
{
  int v, e;
  cout << "enter the numbetr of vertices:";
  cin >> v;
  cout << "enter the number of edges:";
  cin >> e;
  vector<int> adj[v];
  cout << "enter the end points of  edges:" << endl;
  for (int i = 1; i <= e; i++)
  {
    int a, b;
    cout << "enter the end points of edge " << i << ":";
    cin >> a >> b;
    adj[a].push_back(b);
    adj[b].push_back(a);
  }
  cout << "adjacency list of the graph is:" << endl;
  for (int i = 0; i < v; i++)
  {
    cout << i << " ";
    for (int x : adj[i])
    {
      cout << "->" << x;
    }
    cout << endl;
  }
  vector<int> status(v, 0);
  queue<int> q;
  q.push(0);
  status[0] = 1;
  cout << "the order of bfs is :";
  while (q.size() > 0)
  {
    int x = q.front();
    cout << x << ',';
    q.pop();
    for (int i = 0; i < adj[x].size(); i++)
    {
      int e = adj[x][i];
      if (status[e] == 0)
      {
        status[e] = 1;
        q.push(e);
      }
    }
  }
}