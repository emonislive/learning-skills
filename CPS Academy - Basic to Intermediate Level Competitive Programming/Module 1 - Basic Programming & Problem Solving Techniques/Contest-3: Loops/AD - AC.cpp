#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define fast_io() ios::sync_with_stdio(false); cin.tie(nullptr);


void solve() {
    ll size, wordLen, quality;
    ll maxQuality = INT_MIN, pos = -1;
    cin >> size;
    for (ll i = 1; i <= size; i++) {
        cin >> wordLen >> quality;
        if (wordLen <= 10) {
            if (quality >= maxQuality) {
                maxQuality = quality;
                pos = i;
            }
        }
    }
    cout << pos << endl;
}

int main() {
    fast_io();
    ll size;
    cin >> size;
    while (size--) {
        solve();
    }
    return 0;
}
