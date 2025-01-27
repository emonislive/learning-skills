#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve(int AQI)
{
    if (AQI < 100)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int AQI;

    cin >> AQI;
    solve(AQI);

    return 0;
}
