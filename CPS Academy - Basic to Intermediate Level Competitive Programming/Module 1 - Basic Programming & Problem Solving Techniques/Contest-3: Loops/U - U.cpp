#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define fast_io() ios::sync_with_stdio(false); cin.tie(nullptr);

void solve() {
    ll totalPlates, platePerPerson, canFeed = 1, totalNeighbour = 20;

    cin >> totalPlates >> platePerPerson;
    while (totalNeighbour--) {
        ll serveDone = platePerPerson * canFeed;

        if (serveDone <= totalPlates)
            canFeed++;
        else
            break;
    }
    cout << canFeed - 1 << endl;
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
