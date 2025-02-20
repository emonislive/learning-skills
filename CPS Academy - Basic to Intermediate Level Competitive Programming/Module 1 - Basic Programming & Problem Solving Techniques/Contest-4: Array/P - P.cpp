#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

void solve(ll n) {
  vector<ll> personId(n + 1);
  for (ll i = 1; i <= n; i++)
    cin >> personId[i];

  unordered_map<ll, ll> called;
  for (ll i = 1; i <= n; i++) {
    if (called[i] == 0)
      called[personId[i]]++;
  }

  ll inTotalWaitingPerson = 0;
  for (ll i = 1; i <= n; i++) {
    if (called[i] == 0)
      inTotalWaitingPerson++;
  }

  cout << inTotalWaitingPerson << endl;
  for (ll waitingListId = 1; waitingListId <= n; waitingListId++) {
    if (called[waitingListId] == 0)
      cout << waitingListId << " ";
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
