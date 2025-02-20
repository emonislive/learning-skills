#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define fast_io() ios::sync_with_stdio(false); cin.tie(nullptr);

void solve(ll week) {
    vector <ll> stepsPerWeek(week);
    ll day;
    for (ll i = 0; i < week; i++) {
        ll sum = 0;
        for (ll j = 0; j < 7; j++) {
            cin >> day;
            sum += day;
        }
        stepsPerWeek[i] = sum;
    }
    for (auto i : stepsPerWeek)
        cout << i << " ";
}

int main() {
    fast_io();
    ll week;
    cin >> week;
    solve(week);
    return 0;
}
