#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve(int page)
{
    if (page >= 8 && page <= 10)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int page;

    cin >> page;
    solve(page);

    return 0;
}
