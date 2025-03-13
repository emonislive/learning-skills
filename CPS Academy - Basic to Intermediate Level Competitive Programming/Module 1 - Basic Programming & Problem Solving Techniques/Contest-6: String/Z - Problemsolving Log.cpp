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
    int size;
    cin >> size;

    char ch;
    string s;
    for (int i = 0; i < size; i++)
    {
        cin >> ch;
        s.push_back(ch);
    }

    int count = 0;
    unordered_map<char, int> freq;
    for (auto i : s)
    {
        freq[i]++;
        if (freq[i] == (i - 'A' + 1))
            count++;
    }
    cout << count << endl;
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
