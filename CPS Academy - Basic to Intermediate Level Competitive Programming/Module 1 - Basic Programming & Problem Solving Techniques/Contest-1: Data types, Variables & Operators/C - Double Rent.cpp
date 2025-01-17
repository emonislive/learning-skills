#include <iostream>
using namespace std;
#define endl '\n'

void solve(int a)
{
    cout << a * 2 << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int a;
    cin >> a;
    solve(a);
    return 0;
}
