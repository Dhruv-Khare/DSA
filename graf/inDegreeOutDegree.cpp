#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n, e, a, b;
  cout << "enter th eno of vertices: ";
  cin >> n;
  vector<int> adj[n];
  cout << "enter the no of edges: ";
  cin >> e;
  for (int i = 1; i <= e; i++)
  {
    cout << "enter the end point sof edge " << i << ": ";
    cin >> a >> b;
    adj[a].push_back(b);
    // adj[b].push_back(a);
  }
  vector<int> dat(n, 0);
  for (int i = 0; i < n; i++)
  {
    cout << i << ": ";
    for (int j = 0; j < adj[i].size(); j++)
    {
      cout << adj[i][j] << ",";
      dat[adj[i][j]]++;
    }
    cout << endl;
  }
  cout << "outDegrees are:";
  for (int i = 0; i < n; i++)
  {
    cout << i << ":" << adj[i].size() << " ";
  }
  cout << "InDegrees are: ";
  for (int i = 0; i < n; i++)
  {
    cout << i << ":" << dat[i] << " ";
  }
}