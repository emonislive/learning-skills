#include <iostream>
using namespace std;
#define endl '\n'
#define ll long long

void solve(ll a, ll b, ll c, ll d)
{
    ll x, y;

    if (a == 0 || c == 0)
        x = 0;

    if (b == 0 || d == 0)
        y = 0;

    if (a != 0 && b != 0 && c != 0 && d != 0)
    {
        x = a * c;
        y = b * d;
    }
    cout << x + y << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll a, b, c, d;
    cin >> a >> b >> c >> d;
    solve(a, b, c, d);
    return 0;
}
