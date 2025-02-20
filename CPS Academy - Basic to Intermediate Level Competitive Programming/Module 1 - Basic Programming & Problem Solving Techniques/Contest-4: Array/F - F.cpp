#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

void solve() {
  vector<ll> vec(8);
  ll flag = 0;
  
  for (ll i = 0; i < 8; i++) {
    cin >> vec[i];

    if (i > 0) {
      if (vec[i - 1] > vec[i]) // ! condition 1
        flag = 1;
    }

    if (vec[i] % 25 != 0) // ! condition 2
      flag = 1;

    if (vec[i] < 100 || vec[i] > 675) // ! condition 3
      flag = 1;
  }
  
  if (flag)
    cout << "No" << endl;
  else
    cout << "Yes" << endl;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}
