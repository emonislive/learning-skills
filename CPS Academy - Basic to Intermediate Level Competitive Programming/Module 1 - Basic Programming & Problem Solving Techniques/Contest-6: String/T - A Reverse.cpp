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
    int startPos, endPos;
    cin >> startPos >> endPos;

    string s;
    cin >> s;

    string revS = s.substr(startPos - 1, endPos - startPos + 1);
    reverse(revS.begin(), revS.end());

    for (int i = 0; i < startPos - 1; i++)
        cout << s[i];

    cout << revS;

    for (int i = endPos; i < s.size(); i++)
        cout << s[i];

    cout << endl;
}

int main()
{
    fastIO();
    solve();
    return 0;
}
