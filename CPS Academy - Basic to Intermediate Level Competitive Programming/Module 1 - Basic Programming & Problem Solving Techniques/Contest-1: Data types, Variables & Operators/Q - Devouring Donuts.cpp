#include <iostream>
using namespace std;
#define endl '\n'
#define ll long long

void solve(ll donuts, ll calories)
{
    ll totalCalories = donuts * calories;
    cout << totalCalories << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll donuts, calories;
    cin >> donuts >> calories;
    solve(donuts, calories);
    return 0;
}
