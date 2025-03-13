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
    string s;
    int c1, c2, c3, c4, c5, ans;
    c1 = c2 = c3 = c4 = c5 = ans = 0;
    for (int i = 0; i < 10; i++)
    {
        cin >> s;
        for (int j = 0; j < s.length(); j++)
        {
            if (s[j] == 'X')
            {
                if (((i == 0 || i == 9) && j >= 0 && j <= 9) || ((i >= 0 && i <= 9) && j == 0 || j == 9))
                    c1++;
                else if (((i == 1 || i == 8) && j >= 1 && j <= 8) || ((i >= 1 && i <= 8) && j == 1 || j == 8))
                    c2++;
                else if (((i == 2 || i == 7) && j >= 2 && j <= 7) || ((i >= 2 && i <= 7) && j == 2 || j == 7))
                    c3++;
                else if (((i == 3 || i == 6) && j >= 3 && j <= 6) || ((i >= 3 && i <= 6) && j == 3 || j == 6))
                    c4++;
                else if (((i == 4 || i == 5) && j >= 4 && j <= 5) || ((i >= 4 && i <= 5) && j == 4 || j == 5))
                    c5++;
            }
        }
    }
    ans = (c1 * 1) + (c2 * 2) + (c3 * 3) + (c4 * 4) + (c5 * 5);
    cout << ans << endl;
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
