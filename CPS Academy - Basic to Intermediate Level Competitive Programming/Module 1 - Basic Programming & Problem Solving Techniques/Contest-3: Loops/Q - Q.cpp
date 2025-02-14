#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ld long double
#define ll long long
#define fast_io() ios::sync_with_stdio(false); cin.tie(nullptr);

void solve() {
    cout << fixed << setprecision(1);
    ld totalBill, numPeople, avgPerPerson;
    ll avgPerPersonINT, totalFromOthers, totalIPaid;

    cin >> totalBill >> numPeople;

    avgPerPerson = totalBill / (numPeople + 1);
    avgPerPersonINT = avgPerPerson;
    totalFromOthers = avgPerPersonINT * numPeople;
    totalIPaid = totalBill - totalFromOthers;

    cout << totalIPaid << endl;
}

int main() {
    fast_io();
    ll testCase;
    cin >> testCase;
    while (testCase--) {
        solve();
    }
    return 0;
}
