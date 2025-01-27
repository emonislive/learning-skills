#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve(int a, int b, int c)
{
    int temp, count = 3;
    while (count--)
    {
        if (a > b) // swap (a, b)
        {
            temp = a;
            a = b;
            b = temp;
        }
        if (b > c) // swap (b, c)
        {
            temp = b;
            b = c;
            c = temp;
        }
    }
    cout << a << " " << b << " " << c << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b, c;

    cin >> a >> b >> c;
    solve(a, b, c);

    return 0;
}
