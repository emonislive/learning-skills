#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve(int size, int maxCap)
{
    int sum = 0;
    vector<int> v(size);

    for (int i = 0; i < size; i++)
    {
        cin >> v[i];
        if (v[i] <= maxCap)
            sum += v[i];
    }
    cout << sum << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int size, maxCap;
    cin >> size >> maxCap;
    solve(size, maxCap);
    return 0;
}
