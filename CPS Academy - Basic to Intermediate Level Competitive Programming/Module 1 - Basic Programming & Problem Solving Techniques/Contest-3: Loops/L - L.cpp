#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve()
{
    int rating;
    cin >> rating;

    if (rating >= 1900)
        cout << "Division 1" << endl;
    else if (rating >= 1600)
        cout << "Division 2" << endl;
    else if (rating >= 1400)
        cout << "Division 3" << endl;
    else
        cout << "Division 4" << endl;
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
