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
    int n;
    cin >> n;

    string s;
    char ch;
    for (int i = 0; i < n; i++)
    {
        cin >> ch;
        s.push_back(ch);
        s.push_back(ch);
    }
    cout << s << endl;
}

int main()
{
    fastIO();
    solve();
    return 0;
}
