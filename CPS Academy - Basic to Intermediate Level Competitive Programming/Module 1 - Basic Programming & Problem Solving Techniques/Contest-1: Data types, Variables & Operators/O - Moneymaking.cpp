#include <iostream>
using namespace std;
#define endl '\n'
#define ll long long

void solve(ll a, ll b)
{
    cout << (a * 5000) + (b * 9800) << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll a, b;
    cin >> a >> b;
    solve(a, b);
    return 0;
}
