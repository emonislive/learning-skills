#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

void solve(ll n) {
  vector<ll> vec(n);
  for (ll i = 0; i < n; i++)
    cin >> vec[i];

  for (ll i = 0; i < n; i++) {
    if (i == 0)
      cout << vec[i] << " ";
    else {
      ll diff = vec[i] - vec[i - 1];
      cout << diff << " ";
    }
  }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  ll n;
  cin >> n;
  solve(n);
  return 0;
}
