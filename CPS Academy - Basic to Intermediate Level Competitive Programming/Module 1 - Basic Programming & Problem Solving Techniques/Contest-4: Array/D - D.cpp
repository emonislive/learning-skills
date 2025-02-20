#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define fast_io() ios::sync_with_stdio(false); cin.tie(nullptr);

void solve(ll size, ll totalPos) {
    vector<ll> vec(size);
    
    for (auto& in : vec)
        cin >> in;
    
    ll sum = 0, pos;
    for (ll i = 0; i < totalPos; i++) {
        cin >> pos;
        sum += vec[pos - 1];
    }
    cout << sum << endl;
}

int main() {
    fast_io();
    ll size, totalPos;
    cin >> size >> totalPos;
    solve(size, totalPos);
    return 0;
}
