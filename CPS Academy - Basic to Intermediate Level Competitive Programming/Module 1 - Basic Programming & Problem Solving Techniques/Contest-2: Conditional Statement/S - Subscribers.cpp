#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

void solve(ll num)
{
    string s = to_string(num);
    int t, i;

    if (num >= 1e3 && num <= 1e4 - 1) // substract last digits value
    {
        t = 1;
        i = 1;
        while (t--)
        {
            s[s.length() - i] = '0';
            i++;
        }
    }
    else if (num >= 1e4 && num <= 1e5 - 1) // substract last 2 digits value
    {
        t = 2;
        i = 1;
        while (t--)
        {
            s[s.length() - i] = '0';
            i++;
        }
    }
    else if (num >= 1e5 && num <= 1e6 - 1) // substract last 3 digits value
    {
        t = 3;
        i = 1;
        while (t--)
        {
            s[s.length() - i] = '0';
            i++;
        }
    }
    else if (num >= 1e6 && num <= 1e7 - 1) // substract last 4 digits value
    {
        t = 4;
        i = 1;
        while (t--)
        {
            s[s.length() - i] = '0';
            i++;
        }
    }
    else if (num >= 1e7 && num <= 1e8 - 1) // substract last 5 digits value
    {
        t = 5;
        i = 1;
        while (t--)
        {
            s[s.length() - i] = '0';
            i++;
        }
    }
    else if (num >= 1e8 && num <= 1e9 - 1) // substract last 6 digits value
    {
        t = 6;
        i = 1;
        while (t--)
        {
            s[s.length() - i] = '0';
            i++;
        }
    }
    cout << s << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll num;
    cin >> num;
    solve(num);

    return 0;
}
