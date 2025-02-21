#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

void solve() {
  ll n;
  cin >> n;

  ll minBox = LONG_LONG_MIN;
  for (ll i = 0; i < n; i++) {
    ll num;
    cin >> num;

    if (num > minBox)
      minBox = num;
  }
  cout << minBox << endl;
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
