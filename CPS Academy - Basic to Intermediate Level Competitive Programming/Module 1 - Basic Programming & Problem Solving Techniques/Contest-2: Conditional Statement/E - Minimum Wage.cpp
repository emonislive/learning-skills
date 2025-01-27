#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

bool solve(int earns)
{
    return earns <= 11;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int earns;
    cin >> earns;

    if (solve(earns))
        cout << "No" << endl;
    else
        cout << "Yes" << endl;

    return 0;
}
