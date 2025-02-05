#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve()
{
    int student, ticket;
    cin >> student >> ticket;
    if (student < ticket)
        cout << 0 << endl;
    else
        cout << student - ticket << endl;
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
