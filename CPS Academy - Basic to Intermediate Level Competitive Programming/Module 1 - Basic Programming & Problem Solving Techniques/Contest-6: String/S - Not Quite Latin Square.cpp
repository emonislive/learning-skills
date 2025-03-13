#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void fastIO()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

void solve()
{
    int rows = 3, cols = 3;
    vector<vector<char>> vec(rows, vector<char>(cols, 0));
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            cin >> vec[i][j];

    string leftOver;
    for (int i = 0; i < rows; i++)
    {
        leftOver = "ABC";
        for (int j = 0; j < cols; j++)
        {
            if (vec[i][j] != '?')
                leftOver.erase(remove(leftOver.begin(), leftOver.end(), vec[i][j]), leftOver.end());
        }
        if (!leftOver.empty())
            cout << leftOver << endl;
    }
}

int main()
{
    fastIO();
    int tt;
    cin >> tt;
    while (tt--)
    {
        solve();
    }
    return 0;
}
