#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define fast_io() ios::sync_with_stdio(false); cin.tie(nullptr);

void solve() {
    ll operateAircraftPerDay, passengers;
    
    cin >> operateAircraftPerDay >> passengers;
    ll planesNeeded = (passengers + 99) / 100; // equivalent to ceil(passengers / 100.0)
  
    if (planesNeeded <= operateAircraftPerDay)
        cout << 0 << endl;
    else
        cout << (planesNeeded - operateAircraftPerDay) << endl;
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
