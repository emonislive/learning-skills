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
    cin >> s;

    bool flag = true;
    for (int i = 0; i < s.size(); i++)
    {
        if (i % 2 != 0)
        {
            if (s[i] == '1')
            {
                flag = false;
                break;
            }
        }
    }
    if (flag)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}

int main()
{
    fastIO();
    solve();
    return 0;
}
