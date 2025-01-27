#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve(int d, int r, int k)
{
    if (d > r && d > k)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int d, r, k;

    cin >> d >> r >> k;
    solve(d, r, k);

    return 0;
}
