#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve(int hour)
{
    if (hour < 3)
        cout << "GOLD" << endl;
    else if (hour >= 3 && hour < 6)
        cout << "SILVER" << endl;
    else
        cout << "BRONZE" << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int hour;

    cin >> hour;
    solve(hour);

    return 0;
}
