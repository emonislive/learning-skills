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

    string s2 = "ABC";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (s[i] == s2[j])
                s2.erase(s2.begin() + j);

            if (s2.empty())
            {
                cout << i + 1 << endl;
                return;
            }
        }
    }
}

int main()
{
    fastIO();
    solve();
    return 0;
}
