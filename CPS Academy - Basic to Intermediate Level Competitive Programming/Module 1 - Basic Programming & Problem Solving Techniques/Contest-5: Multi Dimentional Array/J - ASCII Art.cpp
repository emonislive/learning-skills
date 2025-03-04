#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void fastIO()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
}

void solve(int row, int col)
{
  vector<vector<int>> vec(row, vector<int>(col));

  for (int i = 0; i < row; i++) // ! 2D input
    for (int j = 0; j < col; j++)
      cin >> vec[i][j];

  for (int i = 0; i < row; i++) // ! Output
  {
    for (int j = 0; j < col; j++)
    {
      if (vec[i][j] == 0)
        cout << '.';
      else
        cout << char(vec[i][j] + 64);
    }
    cout << endl;
  }
}

int main()
{
  fastIO();
  int row, col;
  cin >> row >> col;
  solve(row, col);
  return 0;
}
