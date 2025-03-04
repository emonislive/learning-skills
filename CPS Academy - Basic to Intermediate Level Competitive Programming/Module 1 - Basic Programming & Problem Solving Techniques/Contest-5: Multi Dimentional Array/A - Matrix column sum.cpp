#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

void fastIO()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
}

void solve(ll row, ll col)
{
  vector<vector<ll>> arr(row, vector<ll>(col)); // ? 2D vector
  vector<ll> colSum(col, 0);

  for (ll i = 0; i < row; i++)
  {
    for (ll j = 0; j < col; j++)
    {
      cin >> arr[i][j];
      colSum[j] += arr[i][j];
    }
  }

  for (auto sum : colSum)
    cout << sum << endl;
}

int main()
{
  fastIO();
  ll row, col;
  cin >> row >> col;
  solve(row, col);
  return 0;
}
