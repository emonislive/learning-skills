#include <iostream>
#include <cmath>
using namespace std;
#define endl '\n'
#define ll long long

void solve(ll a)
{
    ll cube = pow(a, 3);
    cout << cube << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll a;
    cin >> a;
    solve(a);
    return 0;
}
