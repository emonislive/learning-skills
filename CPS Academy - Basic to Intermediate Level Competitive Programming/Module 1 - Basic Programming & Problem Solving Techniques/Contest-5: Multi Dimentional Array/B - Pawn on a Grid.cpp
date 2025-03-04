#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

void fastIO()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
}

void solve(ll m, ll n)
{
  char ch;
  ll count = 0;
  for (ll row = 0; row < m; row++)
  {
    for (ll col = 0; col < n; col++)
    {
      cin >> ch;
      if (ch == '#')
        count++;
    }
  }
  cout << count << endl;
}

int main()
{
  fastIO();
  ll m, n;
  cin >> m >> n;
  solve(m, n);
  return 0;
}
