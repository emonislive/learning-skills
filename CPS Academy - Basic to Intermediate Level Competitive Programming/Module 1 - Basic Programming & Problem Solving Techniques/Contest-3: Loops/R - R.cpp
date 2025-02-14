#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define ld long double
#define fast_io() ios::sync_with_stdio(false); cin.tie(nullptr);

void solve() {
    ll schools, studentsPerSchool, passedStudents;
    cin >> schools >> studentsPerSchool >> passedStudents;

    ll totalStudents = studentsPerSchool * schools;
    ld passPercentage = (passedStudents * 100.0) / totalStudents;

    if (passPercentage > 50)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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
