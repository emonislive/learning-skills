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
    string num;
    cin >> num;

    int partOneSum = 0, partTwoSum = 0;
    for (int i = 0; i < 6; i++)
    {
        if (i < 3)
            partOneSum += num[i] - '0';
        else
            partTwoSum += num[i] - '0';
    }

    if (partOneSum == partTwoSum)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

int main()
{
    fastIO();
    int tt;
    cin >> tt;
    while (tt--)
    {
        solve();
    }
    return 0;
}
