#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

void solve(ll size) {
  vector<ll> vec(size);

  for (auto &in : vec)
    cin >> in;

  ll currentHeight = vec[0];

  if (size == 1) {
    cout << currentHeight << endl;
    return;
  }

  for (ll i = 0; i < size - 1; i++) {
    if (vec[i] < vec[i + 1])
      currentHeight = vec[i + 1];
    else
      break;
  }
  cout << currentHeight << endl;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  ll size;
  cin >> size;
  solve(size);
  return 0;
}
