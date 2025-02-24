#include <bits/stdc++.h>
using namespace std;
bool vertexVisit(vector<int> adj[], vector<int> &status, int i)
{
  if (status[i] == true)
    return true;
  status[i] = true;
  bool flag = false;
  for (int j = 0; j < adj[i].size(); j++)
  {
    flag = vertexVisit(adj, status, adj[i][j]);
    if (flag == true)
      return true;
  }
  return false;
}
bool cycleDetection(vector<int> adj[], int n)
{
  bool check = false;
  vector<int> status(n, 0);
  for (int i = 0; i < n; i++)
  {
    status[i] = true;
    for (int j = 0; j < adj[i].size(); j++)
    {
      check = vertexVisit(adj, status, i);
      if (check == 1)
      {
        return true;
      }
    }
    status[i] = false;
  }
  return false;
}

int main()
{
  int N, E, i, a, b;
  cout << "enter the no of vertices:";
  cin >> N;
  vector<int> adj[N];
  cout << "enter the no of edges:";
  cin >> E;
  for (i = 1; i <= E; i++)
  {
    cout << "enter the end points of edge" << i << ": ";

    cin >> a >> b;
    adj[a].push_back(b);
  }
  for (i = 0; i < N; i++)
  {

    cout << i << ": ";
    for (int j = 0; j < adj[i].size(); j++)
    {
      cout << adj[i][j] << ",";
    }
    cout << "\n";
  }
  int check = cycleDetection(adj, N);
  check == 1 ? cout << "A cycle exist in the graf" : cout << "A cycle does not exist in the graf";
}