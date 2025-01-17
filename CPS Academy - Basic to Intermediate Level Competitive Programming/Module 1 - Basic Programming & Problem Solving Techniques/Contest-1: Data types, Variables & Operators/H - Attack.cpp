#include <iostream>
using namespace std;
#define endl '\n'
#define ll long long

void solve(ll health, ll damage)
{
    ll totalHitNeed = ((health + damage - 1) / damage);
    cout << totalHitNeed << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll health, damage;
    cin >> health >> damage;
    solve(health, damage);
    return 0;
}
