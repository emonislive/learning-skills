#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve(int people)
{
    if (people >= 6 && people <= 8)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int people;

    cin >> people;
    solve(people);

    return 0;
}
