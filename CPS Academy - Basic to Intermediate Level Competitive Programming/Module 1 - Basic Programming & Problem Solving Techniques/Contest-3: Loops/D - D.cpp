#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define fast_io() ios::sync_with_stdio(false); cin.tie(nullptr);

void solve() {
    ll k, count = 0, x = 0;
    cin >> k;
    while (count < k) {
        x++;
        if (x % 3 != 0 && x % 10 != 3) {
            count++;
        }
    }
    cout << x << endl;
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
