#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void fastIO()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

void solve()
{
    string decimal = "1415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679";

    int pos;
    cin >> pos;

    cout << "3.";
    for (int i = 0; i < pos; i++)
        cout << decimal[i];

    cout << endl;
}

int main()
{
    fastIO();
    solve();
    return 0;
}
