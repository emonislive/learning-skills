#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define fast_io() ios::sync_with_stdio(false); cin.tie(nullptr);


void solve(ll totalSubjects) {
    ll maxPoint, avgPointTarget, sum = 0;
    cin >> maxPoint >> avgPointTarget;

    --totalSubjects;
    vector<ll> vec(totalSubjects);

    for (ll i = 0; i < totalSubjects; i++) {
        cin >> vec[i];
        sum += vec[i];
    }

    ++totalSubjects;
    ll checkAvg = sum / totalSubjects;

    if (checkAvg >= avgPointTarget)
        cout << 0 << endl;
    else {
        ll needPoints = (avgPointTarget * totalSubjects) - sum;

        if (needPoints > maxPoint)
            cout << -1 << endl;
        else
            cout << needPoints << endl;
    }

}
int main() {
    fast_io();
    ll totalSubjects;
    cin >> totalSubjects;
    solve(totalSubjects);
    return 0;
}
