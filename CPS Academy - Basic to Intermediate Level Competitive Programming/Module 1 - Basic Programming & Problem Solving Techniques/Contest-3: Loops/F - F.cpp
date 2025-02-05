#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve(int num)
{
    string s;

    s.push_back('L');

    for (int i = 0; i < num; i++) {
        s.push_back('o');
    }
    
    s.push_back('n');
    s.push_back('g');

    cout << s << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int num;
    cin >> num;
    solve(num);
    return 0;
}
