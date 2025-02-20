#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

void solve(ll n) {
  vector<ll> vec(n);
  unordered_map<ll, ll> freq;

  for (auto &in : vec) {
    cin >> in;
    freq[in]++;
  }
  ll cardRemoved = 0;
  for (auto &pair : freq) {
    if (pair.second < 4)
      cardRemoved = pair.first;
  }
  cout << cardRemoved << endl;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  ll n;
  cin >> n;

  n *= 4;
  --n;

  solve(n);
  return 0;
}
