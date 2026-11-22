#include<bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;
  vector<int> g6, g2, g3, g1;
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    if (x % 6 == 0) g6.push_back(x);
    else if (x % 2 == 0) g2.push_back(x);
    else if (x % 3 == 0) g3.push_back(x);
    else g1.push_back(x);
  }
  for (int x : g6) cout << x << " ";
  for (int x : g2) cout << x << " ";
  for (int x : g1) cout << x << " ";
  for (int x : g3) cout << x << " ";
  cout << "\n";
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--)
    solve();
  return 0;
}
