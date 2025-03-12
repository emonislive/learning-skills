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
    bool flag = true;
    for (int i = 1; i < num.size(); i++)
    {
        if (num[i - 1] <= num[i])
        {
            flag = false;
            break;
        }
    }
    if (flag)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}

int main()
{
    fastIO();
    solve();
    return 0;
}
