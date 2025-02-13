#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define fast_io() ios::sync_with_stdio(false); cin.tie(nullptr);

void solve(ll count) {
    ll a, b;
    cin >> a >> b;
    printf("Case %lld: %lld\n", count, a + b);
}

int main() {
    fast_io();
    ll tt, i = 1;
    cin >> tt;
    while (tt--) {
        solve(i);
        i++;
    }
    return 0;
}
