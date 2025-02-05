#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve()
{
    int incomeChef, incomeChefina;
    cin >> incomeChef >> incomeChefina;

    cout << abs(incomeChef - incomeChefina) << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int testCase;
    cin >> testCase;
    while (testCase--)
    {
        solve();
    }
    return 0;
}
