#include <iostream>
using namespace std;
#define endl '\n'
#define ll long long

void solve(ll length, ll breadth)
{
    ll Area_Of_The_Rectangle = length * breadth;
    ll Perimeter_Of_The_Rectangle = 2 * (breadth + length);
    cout << Area_Of_The_Rectangle << " " << Perimeter_Of_The_Rectangle << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll length, breadth;
    cin >> length >> breadth;
    solve(length, breadth);
    return 0;
}
