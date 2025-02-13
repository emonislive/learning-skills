#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define fast_io() ios::sync_with_stdio(false); cin.tie(nullptr);

void solve() {
    ll exportA, importA, exportOfA;
    ll exportB, importB, exportOfB;
    ll netExport;

    cin >> exportA >> importA;
    cin >> exportB >> importB;

    exportOfA = exportA - importA;
    exportOfB = exportB - importB;

    netExport = exportOfA + exportOfB;

    if (netExport < 0)
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
