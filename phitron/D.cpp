#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, e, x, y, k;
  cin >> n >> e;
  vector<vector<int>> adj(n);
  for (int i = 0; i < e; i++) {
    int a, b;
    cin >> a >> b;
    adj[a].push_back(b);
    adj[b].push_back(a);
  }
  cin >> x >> y >> k;
  queue<pair<int, int>> q;
  q.push({x, 0});
  q.push({y, 0});
  bool visited[n] = {false};
  visited[x] = true;
  visited[y] = true;
  while (!q.empty()) {
    int u = q.front().first;
    int dist = q.front().second;
    q.pop();
    if (dist > k) {
      break;
    }
    for (int v : adj[u]) {
      if (!visited[v]) {
        visited[v] = true;
        q.push({v, dist + 1});
      }
    }
  }
  if (visited[x] && visited[y]) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }
  return 0;
}