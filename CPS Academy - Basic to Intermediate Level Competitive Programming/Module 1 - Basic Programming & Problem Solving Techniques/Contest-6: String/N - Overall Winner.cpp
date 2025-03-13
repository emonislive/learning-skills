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
    vector<int> freq(2, 0);
    char ch, matchWon;
    string s;
    int n, maxVal = INT_MIN;
    
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> ch;
        s.push_back(ch);
    }
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'A')
        {
            freq[0]++;
            if (freq[0] > maxVal)
            {
                maxVal = freq[0];
                matchWon = 'A';
            }
        }
        else
        {
            freq[1]++;
            if (freq[1] > maxVal)
            {
                maxVal = freq[1];
                matchWon = 'T';
            }
        }
    }
    cout << matchWon << endl;
}

int main()
{
    fastIO();
    solve();
    return 0;
}
