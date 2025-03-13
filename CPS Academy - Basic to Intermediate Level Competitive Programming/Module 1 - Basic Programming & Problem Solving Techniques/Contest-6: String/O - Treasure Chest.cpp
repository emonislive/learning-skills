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

    stack<char> st;
    st.push('|');
    st.push('*');
    st.push('|');

    int i = 0;
    while (!st.empty() && i < s.size())
    {
        char element = st.top();

        if (element == s[i])
            st.pop();

        i++;
    }

    if (st.empty())
        cout << "in" << endl;
    else
        cout << "out" << endl;
}

int main()
{
    fastIO();
    solve();
    return 0;
}
