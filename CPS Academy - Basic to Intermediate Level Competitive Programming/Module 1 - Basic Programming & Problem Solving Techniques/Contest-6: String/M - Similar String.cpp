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

    string s, s2;
    char ch;
    for (int i = 0; i < n; i++)
    {
        cin >> ch;
        s.push_back(ch);
    }
    for (int i = 0; i < n; i++)
    {
        cin >> ch;
        s2.push_back(ch);
    }
  
    bool flag = true;
    for (int i = 0; i < n; i++)
    {
        if (s[i] != s2[i])
        {
            if ((s[i] == '0' && s2[i] == 'o') || (s[i] == 'o' && s2[i] == '0'))
                continue;
            else if ((s[i] == '1' && s2[i] == 'l') || (s[i] == 'l' && s2[i] == '1'))
                continue;
            else
            {
                flag = false;
                break;
            }
        }
    }
  
    if (flag)
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
