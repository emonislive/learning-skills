#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define fast_io() ios::sync_with_stdio(false); cin.tie(nullptr);

void solve() {
    ll totalBuns, bunPerPerson, backupDays, needBunPerPerson;
    ll totalPerson = 5;

    cin >> totalBuns >> bunPerPerson >> backupDays;
    needBunPerPerson = totalPerson * bunPerPerson;

    ll totalEatenBun = 0, currentDaysEaten;
    for (ll i = 0; ;i++) {
        totalEatenBun += needBunPerPerson * 1;
        if (totalEatenBun > totalBuns) {
            currentDaysEaten = i;
            break;
        }
    }
    ll totalFoodBackup = currentDaysEaten + backupDays;
    cout << totalFoodBackup << endl;
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
