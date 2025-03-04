#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

void fastIO()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
}

void solve(ll a, ll b)
{
  if ((a >= 1 && a <= 3) && (b >= 1 && b <= 3))
    cout << "Yes" << endl;
  else if ((a >= 4 && a <= 6) && (b >= 4 && b <= 6))
    cout << "Yes" << endl;
  else if ((a >= 7 && a <= 9) && (b >= 7 && b <= 9))
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
}

int main()
{
  fastIO();
  ll a, b;
  cin >> a >> b;
  solve(a, b);
  return 0;
}
