#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

void solve(string &s) {

  for (ll i = 0; i < s.size(); i++) {
    if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
      continue;
    else
      cout << s[i];
  }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  string s;
  cin >> s;
  solve(s);
  return 0;
}
