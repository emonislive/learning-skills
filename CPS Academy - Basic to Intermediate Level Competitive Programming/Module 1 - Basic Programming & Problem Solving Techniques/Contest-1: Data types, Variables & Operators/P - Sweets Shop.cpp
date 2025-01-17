#include <iostream>
using namespace std;
#define endl '\n'
#define ll long long

void solve(ll money, ll ladduBought)
{
    ll moneyRemaining = money - (ladduBought * 10);
    cout << moneyRemaining / 20 << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll money, ladduBought;
    cin >> money >> ladduBought;
    solve(money, ladduBought);
    return 0;
}
