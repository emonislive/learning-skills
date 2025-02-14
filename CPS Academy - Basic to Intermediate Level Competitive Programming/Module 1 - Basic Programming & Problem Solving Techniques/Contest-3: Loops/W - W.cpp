#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define ld long double
#define fast_io() ios::sync_with_stdio(false); cin.tie(nullptr);

void solve() {
    ll count = 1;
    ld insuranceCost, commission, insuranceSold;

    cin >> insuranceCost;
    commission = insuranceCost * 0.2;

    for (ll i = 1; ;i++) {
        insuranceSold = commission * i;
        if (insuranceSold > 100)
            break;
        else
            count++;
    }
    cout << count << endl;
}

int main() {
    fast_io();
    int testCase;
    cin >> testCase;
    while (testCase--) {
        solve();
    }
    return 0;
}
