#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define fast_io() ios::sync_with_stdio(false); cin.tie(nullptr);

void solve() {
    ll halfPlayer, ratedPlayer, unratedPlayer;
    cin >> halfPlayer >> ratedPlayer;

    unratedPlayer = (2 * halfPlayer) - ratedPlayer;

    if (ratedPlayer <= unratedPlayer)
        cout << 0 << endl;
    else
        cout << ratedPlayer - unratedPlayer << endl;
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
