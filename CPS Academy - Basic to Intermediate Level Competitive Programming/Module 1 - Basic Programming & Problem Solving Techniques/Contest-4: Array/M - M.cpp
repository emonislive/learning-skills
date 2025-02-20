#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

void solve(ll n) {
  vector<ll> vec(n);
  ll minVal = LONG_LONG_MAX, pos;

  for (ll i = 0; i < n; i++) {
    cin >> vec[i];

    if (vec[i] < minVal) {
      minVal = vec[i];
      pos = i;
    }
  }

  vec[pos] = minVal + 1;
  ll mul = 1;

  for (auto in : vec)
    mul *= in;

  cout << mul << endl;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  ll tt, n;
  cin >> tt;

  while (tt--) {
    cin >> n;
    solve(n);
  }
  return 0;
}
