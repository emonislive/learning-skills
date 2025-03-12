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
    for (int i = 0; i < n; i++)
    {
        char ch;
        cin >> ch;
        s.push_back(ch);
    }
    for (int i = 0; i < n - 1; i++)
    {
        if ((s[i] == 'a' && s[i + 1] == 'b') || (s[i] == 'b' && s[i + 1] == 'a'))
        {
            cout << "Yes" << endl;
            return;
        }
    }
    cout << "No" << endl;
}

int main()
{
    fastIO();
    solve();
    return 0;
}
