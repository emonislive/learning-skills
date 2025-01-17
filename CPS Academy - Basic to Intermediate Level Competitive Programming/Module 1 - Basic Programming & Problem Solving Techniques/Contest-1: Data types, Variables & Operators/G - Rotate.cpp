#include <iostream>
using namespace std;
#define endl '\n'

void solve(int in)
{
    int x, y, z, a, b, c;

    // Singling out the 3 digits from a 3 digit number
    z = in % 10;
    in /= 10;
    y = in % 10;
    x = in /= 10;

    // Adding up
    a = (x * 100) + (y * 10) + z;
    b = (y * 100) + (z * 10) + x;
    c = (z * 100) + (x * 10) + y;

    cout << a + b + c << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int in;
    cin >> in;
    solve(in);
    return 0;
}
