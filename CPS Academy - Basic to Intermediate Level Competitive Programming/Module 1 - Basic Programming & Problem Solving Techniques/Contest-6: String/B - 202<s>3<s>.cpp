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
    s[s.size() - 1] = '4';
    cout << s << endl;
}

int main()
{
    fastIO();
    solve();
    return 0;
}
