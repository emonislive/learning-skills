#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

void solve(ll n, ll startPos1, ll endPos1, ll startPos2, ll endPos2) {
  vector<ll> vec(n);

  --startPos1; // ! position starts from 0 instead of 1 in vector
  --startPos2;

  for (auto &in : vec)
    cin >> in;

  // ? here, ep1 - sp1 = ep2 - sp2 (condition given)
  // ? so,     len1    =    len2  -> len
  ll len = endPos1 - startPos1;

  swap_ranges(vec.begin() + startPos1, vec.begin() + startPos1 + len,
              vec.begin() + startPos2);

  for (auto in : vec)
    cout << in << " ";
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  ll n, startPos1, endPos1, startPos2, endPos2;
  cin >> n >> startPos1 >> endPos1 >> startPos2 >> endPos2;
  solve(n, startPos1, endPos1, startPos2, endPos2);
  return 0;
}
