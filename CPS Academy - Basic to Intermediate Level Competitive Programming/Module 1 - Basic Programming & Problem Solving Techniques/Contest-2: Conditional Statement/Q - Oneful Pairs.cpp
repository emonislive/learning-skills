#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

void solve(ll a, ll b)
{
    ll checkOnefulPair = ((a + b) + (a * b));

    if (checkOnefulPair == 111)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll a, b;
    cin >> a >> b;
    solve(a, b);
    return 0;
}
