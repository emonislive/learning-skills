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

    for (auto in : s)
        cout << (in == '0' ? 1 : 0);

    cout << endl;
}

int main()
{
    fastIO();
    solve();
    return 0;
}
