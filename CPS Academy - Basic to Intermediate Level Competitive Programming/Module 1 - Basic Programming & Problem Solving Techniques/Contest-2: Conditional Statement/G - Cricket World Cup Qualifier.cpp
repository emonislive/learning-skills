#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve(int score)
{
    if (score >= 12)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int score;

    cin >> score;
    solve(score);

    return 0;
}
