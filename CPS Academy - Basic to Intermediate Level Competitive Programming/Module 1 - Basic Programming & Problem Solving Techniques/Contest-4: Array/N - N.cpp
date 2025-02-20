#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

void solve(ll n) {
  vector<ll> vec(n);
  map<ll, ll> freq;

  for (auto &in : vec) {
    cin >> in;
    freq[in]++;
  }

  ll maxFreq = 0, maxFreqNum = 0;

  for (const auto pair : freq) {
    if (pair.second >= 3) {
      if (maxFreq <= pair.second) {
        maxFreq = pair.second;
        maxFreqNum = pair.first;
      }
    }
  }

  if (!maxFreqNum)
    cout << -1 << endl;
  else
    cout << maxFreqNum << endl;
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
