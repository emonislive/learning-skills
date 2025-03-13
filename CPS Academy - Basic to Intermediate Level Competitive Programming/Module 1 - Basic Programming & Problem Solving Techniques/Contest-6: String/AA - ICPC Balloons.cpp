#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void fastIO()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

void solve()
{
    int n;
    cin >> n;

    char ch;
    string s;
    for (int i = 0; i < n; i++)
    {
        cin >> ch;
        s.push_back(ch);
    }
    
    unordered_map<char, int> freq;
    for (auto i : s)
        freq[i]++;

    int sum = 0;
    for (auto i : freq)
        sum += i.second + 1;

    cout << sum << endl;
}

int main()
{
    fastIO();
    int tt;
    cin >> tt;
    while (tt--)
    {
        solve();
    }
    return 0;
}
