#include <iostream>
#include <iomanip>
using namespace std;
#define endl '\n'

void solve(int a, int b)
{
    int division = a / b;
    int remainder = a % b;
    double fraction = (double)a / b;

    cout << fixed << setprecision(5);
    cout << division << " " << remainder << " " << fraction << endl;
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
