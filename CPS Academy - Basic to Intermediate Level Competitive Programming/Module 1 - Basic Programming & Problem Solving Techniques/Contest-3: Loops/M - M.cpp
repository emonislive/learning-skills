#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve()
{
    vector<char> ch(6);

    for (int i = 0; i < 6; i++)
    {
        cin >> ch[i];
    }

    for (int i = 0; i < 4; i++)
    {
        if (ch[i] == ch[i + 1] && ch[i + 1] == ch[i + 2] && ch[i] == 'W')
        {
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO" << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int testCase;
    cin >> testCase;
    while (testCase--)
    {
        solve();
    }
    return 0;
}
