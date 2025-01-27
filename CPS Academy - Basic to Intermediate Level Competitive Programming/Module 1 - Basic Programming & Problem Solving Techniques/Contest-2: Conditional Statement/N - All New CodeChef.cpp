#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve(int old, int new_)
{
    if (old < new_)
        cout << "Old" << endl;
    else if (old > new_)
        cout << "New" << endl;
    else
        cout << "Same" << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int old, new_;

    cin >> old >> new_;
    solve(old, new_);

    return 0;
}
