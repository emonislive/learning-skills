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

    if (s == "abc")
    {
        cout << "YES" << endl;
        return;
    }

    bool flag = false;
    string tmp = s;

    swap(tmp[0], tmp[1]);
    if (tmp == "abc")
        flag = true;

    tmp = s;
    swap(tmp[1], tmp[2]);
    if (tmp == "abc")
        flag = true;

    tmp = s;
    swap(tmp[0], tmp[2]);
    if (tmp == "abc")
        flag = true;

    if (flag)
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
