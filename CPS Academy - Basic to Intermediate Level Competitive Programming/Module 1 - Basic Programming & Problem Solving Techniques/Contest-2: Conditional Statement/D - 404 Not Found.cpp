#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

bool solve(int code)
{
    return code == 404;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int code;
    cin >> code;

    if (solve(code))
        cout << "NOT FOUND" << endl;
    else
        cout << "FOUND" << endl;

    return 0;
}
