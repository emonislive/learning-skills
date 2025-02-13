#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define fast_io() ios::sync_with_stdio(false); cin.tie(nullptr);


void solve() {
    ll n;
    cin >> n;
    if (n % 2 == 0 || n == 1)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

int main() {
    fast_io();
    ll tt;
    cin >> tt;
    while (tt--) {
        solve();
    }
    return 0;
}
