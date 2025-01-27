#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve(int maxWeightAllowed, int minheightAllowed)
{
    int myWeight = 60;
    int myHeight = 130;

    if (myWeight <= maxWeightAllowed && myHeight >= minheightAllowed)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int maxWeightAllowed, minheightAllowed;

    cin >> maxWeightAllowed >> minheightAllowed;
    solve(maxWeightAllowed, minheightAllowed);

    return 0;
}
