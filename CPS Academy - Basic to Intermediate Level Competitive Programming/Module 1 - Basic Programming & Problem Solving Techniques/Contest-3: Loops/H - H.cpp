#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve()
{
    int candy;
    cin >> candy;

    if (candy % 3 == 0)
    {
        cout << "YES" << endl;
        cout << endl;
    }
    else
    {
        cout << "NO" << endl;
        cout << endl;
    }
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
