#include <iostream>
using namespace std;
#define endl '\n'

void solve(int year)
{
    int ans = year % 100;
    if (ans == 0)
        cout << "K00" << endl;
    else if (ans > 0 && ans < 10)
        cout << "K0" << ans << endl;
    else
        cout << "K" << ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int year;
    cin >> year;
    solve(year);
    return 0;
}
