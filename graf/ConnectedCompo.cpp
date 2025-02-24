#include <bits/stdc++.h>
using namespace std;
int dfs_visit(vector<int> Adj[], vector<int> &status, int i, int x)
{
  status[i] = 1;
  cout << i << ' ';
  for (int j = 0; j < Adj[i].size(); j++)
  {
    if (status[Adj[i][j]] == 0)
    {
      x++;
      x = dfs_visit(Adj, status, Adj[i][j], x);
    }
  }
  return x;
}
void dfs(vector<int> Adj[], int n)
{
  int c = 0;
  vector<int> status(n, 0);
  vector<int> elementsInConnectedComponent;
  for (int i = 0; i < n; i++)
  {
    if (status[i] == 0)
    {
      c++;
      int ele = dfs_visit(Adj, status, i, 1);
      elementsInConnectedComponent.push_back(ele);
    }
  }
  cout << "\n The number of connected components:" << c << '\n';
  for (int i = 0; i < c; i++)
  {
    cout << "component " << i + 1 << " has " << elementsInConnectedComponent[i] << "elements\n";
  }
}
int main()
{
  int n, e, i, a, b;
  cout << "enetr the number of vertices:";
  cin >> n;
  vector<int> Adj[n];
  cout << "enter the number of edges:";
  cin >> e;
  for (int i = 1; i <= e; i++)
  {
    cout << "eneter the end points of edge " << i << ":";
    cin >> a >> b;
    Adj[a].push_back(b);
    Adj[b].push_back(a);
  }
  for (int i = 0; i < n; i++)
  {
    cout << i << ": ";
    for (int j = 0; j < Adj[i].size(); j++)
    {
      cout << Adj[i][j] << ',';
    }
    cout << '\n';
  }

  cout << "order of dfs is:";
  dfs(Adj, n);
  return 0;
}