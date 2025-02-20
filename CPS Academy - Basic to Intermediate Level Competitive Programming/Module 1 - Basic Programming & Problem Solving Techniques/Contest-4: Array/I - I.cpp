#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define ld long double

void solve(ll n) {

  vector<ll> vec(n);
  ll sum = 0;

  for (auto &in : vec) {
    cin >> in;
    sum += in;
  }
  ld sqr = sqrt(sum);

  if (floor(sqr) == ceil(sqr))
    cout << "YES" << endl;
  else
    cout << "NO" << endl;
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
