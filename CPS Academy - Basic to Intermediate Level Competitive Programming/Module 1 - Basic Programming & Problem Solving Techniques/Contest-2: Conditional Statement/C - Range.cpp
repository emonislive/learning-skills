#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve(int a, int b, int c)
{
    if (a < b && b < c)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b, c;

    cin >> a >> b >> c;
    solve(a, b, c);

    return 0;
}
