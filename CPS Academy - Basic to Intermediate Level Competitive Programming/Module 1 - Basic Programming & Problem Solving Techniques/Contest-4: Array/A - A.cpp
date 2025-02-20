#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define fast_io() ios::sync_with_stdio(false); cin.tie(nullptr);

void solve() {
    ll size, num, odd = 0;
    cin >> size;
    for (ll i = 0; i < size; i++) {
        cin >> num;
        if (num % 2 != 0)
            odd++;
    }
    cout << odd << endl;
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
