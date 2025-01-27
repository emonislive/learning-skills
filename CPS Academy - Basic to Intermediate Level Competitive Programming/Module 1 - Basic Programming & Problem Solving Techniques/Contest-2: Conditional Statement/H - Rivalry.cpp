#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve(int d1, int e1, int d2, int e2)
{
    int ratingD = d1 + d2;
    int ratingE = e1 + e2;

    if (ratingD > ratingE)
        cout << "Dominater" << endl;
    else
        cout << "Everule" << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int d1, d2, e1, e2;

    cin >> d1 >> e1 >> d2 >> e2;
    solve(d1, e1, d2, e2);

    return 0;
}
