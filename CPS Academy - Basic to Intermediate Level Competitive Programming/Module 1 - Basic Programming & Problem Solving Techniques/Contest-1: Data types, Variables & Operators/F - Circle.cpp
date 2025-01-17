#include <iostream>
#include <iomanip>
using namespace std;
#define endl '\n'
#define pi 3.141592653589793238462643383279502884197

void solve(double r)
{
    double Area_Of_A_Circle = 2 * pi * r;
    double Circumference_Of_A_Circle = pi * r * r;

    cout << fixed << setprecision(6);
    cout << Circumference_Of_A_Circle << " " << Area_Of_A_Circle << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    double r;
    cin >> r;
    solve(r);
    return 0;
}
