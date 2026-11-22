#include<bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;
  string s;
  cin >> s;
  int open_brackets = 0;
  int close_brackets = 0;
  for (char ch : s) {
    if (ch == ')') close_brackets++;
    else open_brackets++;
  }
  if (open_brackets == close_brackets) cout << "YES\n";
  else cout << "NO\n";
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
