#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

void fastIO()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
}

void solve()
{
  char ch;
  string ans;
  int row = 8, col = 8;
  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < col; j++)
    {
      cin >> ch;
      if (ch == '*')
      {
        int c = 7 - i + 1;
        ans.push_back(97 + j); // Converts an integer (j) to a lowercase letter ('a' = 97 in ASCII)
        ans.push_back(c + 48); // Converts a digit (c) to its character representation ('0' = 48 in ASCII)
      }
    }
  }
  cout << ans << endl;
}

int main()
{
  fastIO();
  solve();
  return 0;
}
