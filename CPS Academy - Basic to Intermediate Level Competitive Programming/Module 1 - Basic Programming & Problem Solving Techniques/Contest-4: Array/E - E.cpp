#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define fast_io() ios::sync_with_stdio(false); cin.tie(nullptr);

void solve(ll size, ll delay) {
    vector<ll> vec(size);

    for (auto& in : vec)
        cin >> in;

    for (ll i = 1; i < size; i++) {
        if (vec[i] - vec[i - 1] <= delay) {
            cout << vec[i] << endl;
            return;
        }
    }
    cout << -1 << endl;
}

int main() {
    fast_io();
    ll size, delay;
    cin >> size >> delay;
    solve(size, delay);
    return 0;
}
