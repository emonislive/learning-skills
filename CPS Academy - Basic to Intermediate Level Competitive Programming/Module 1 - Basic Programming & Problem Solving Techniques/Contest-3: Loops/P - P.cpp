#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

void solve()
{
    ll assignment, minToComplete, days, timeItTakes, timeIHave;
    cin >> assignment >> minToComplete >> days;

    timeItTakes = assignment * minToComplete;
    timeIHave = days * 24 * 60;

    if (timeItTakes <= timeIHave)
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
