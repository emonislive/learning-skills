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

    string s;
    char ch;
    for (int i = 0; i < n; i++)
    {
        cin >> ch;
        s.push_back(ch);
    }

    bool alternating = true;
    for (int i = 0; i < n - 1; i++)
    {
        if (s[i] == 'M' && s[i + 1] == 'M')
        {
            alternating = false;
            break;
        }

        if (s[i] == 'F' && s[i + 1] == 'F')
        {
            alternating = false;
            break;
        }
    }
    
    if (alternating)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}

int main()
{
    fastIO();
    solve();
    return 0;
}
