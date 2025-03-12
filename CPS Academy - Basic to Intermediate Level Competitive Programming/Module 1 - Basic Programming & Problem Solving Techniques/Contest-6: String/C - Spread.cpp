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
    for (int i = 0; i < s.size(); i++)
    {
        cout << s[i];

        if (i != s.size() - 1)
            cout << ' ';
    }
    cout << endl;
}

int main()
{
    fastIO();
    solve();
    return 0;
}
