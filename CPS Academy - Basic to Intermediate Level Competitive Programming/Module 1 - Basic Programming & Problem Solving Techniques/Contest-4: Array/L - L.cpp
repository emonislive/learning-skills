#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

void solve(ll n) {
  vector<ll> num(n + 1, 0), vec(n - 1);

  for (ll i = 0; i < n - 1; i++) {
    cin >> vec[i];
    num[vec[i]]++;
  }

  for (ll missingNum = 1; missingNum <= n; missingNum++) {
    if (num[missingNum] == 0) {
      cout << missingNum << endl;
      return;
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
