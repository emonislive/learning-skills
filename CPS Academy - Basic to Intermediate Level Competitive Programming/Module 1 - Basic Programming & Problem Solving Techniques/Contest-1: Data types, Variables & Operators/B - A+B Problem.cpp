#include <iostream>
using namespace std;
#define endl '\n'

void solve(int a, int b)
{
    cout << a + b << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int a, b;
    cin >> a >> b;
    solve(a, b);
    return 0;
}
