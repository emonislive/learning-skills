#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve()
{
    int temp;
    cin >> temp;
    if (temp > 24)
        cout << "YES" << endl;
    else
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
