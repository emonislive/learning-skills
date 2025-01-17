#include <iostream>
using namespace std;
#define endl '\n'

void solve(int rainyDay, int cloudyDay)
{
    int busyDay = rainyDay + cloudyDay;
    int clearDay = 7 - busyDay;
    cout << clearDay << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int rainyDay, cloudyDay;
    cin >> rainyDay >> cloudyDay;
    solve(rainyDay, cloudyDay);
    return 0;
}
