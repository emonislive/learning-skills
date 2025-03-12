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
    string s, s2;
    cin >> s;

    for (int i = 0; i < s.size(); i++)
        s2.push_back(tolower(s[i]));

    if (s2 == "yes")
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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
