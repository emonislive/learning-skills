#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

void solve() {
  ll chocolate, candy;
  cin >> chocolate >> candy;

  chocolate *= 2;
  candy *= 5;

  if (chocolate > candy)
    cout << "Chocolate" << endl;
  else if (chocolate < candy)
    cout << "Candy" << endl;
  else
    cout << "Either" << endl;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  
  ll tt;
  cin >> tt;
  while (tt--) {
    solve();
  }
  return 0;
}
