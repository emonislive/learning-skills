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
    int num;
    cin >> num;

    vector<int> numParts;

    int placeHolder = 1;
    while (num > 0)
    {
        int val = num % 10 * placeHolder;
        if (val != 0)
            numParts.push_back(val);

        num /= 10;
        placeHolder *= 10;
    }

    cout << numParts.size() << endl;
    for (auto parts : numParts)
    {
        if (parts != 0)
            cout << parts << " ";
    }
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
