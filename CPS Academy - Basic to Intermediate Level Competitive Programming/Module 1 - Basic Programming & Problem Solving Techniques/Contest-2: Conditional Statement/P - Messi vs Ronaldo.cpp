#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve(int goalMessi, int assistMessi, int goalRonaldo, int assistRonaldo)
{
    int totalPointsMessi = (goalMessi * 2) + assistMessi;
    int totalPointsRonaldo = (goalRonaldo * 2) + assistRonaldo;

    if (totalPointsMessi > totalPointsRonaldo)
        cout << "Messi" << endl;
    else if (totalPointsMessi < totalPointsRonaldo)
        cout << "Ronaldo" << endl;
    else
        cout << "Equal" << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int goalMessi, assistMessi, goalRonaldo, assistRonaldo;

    cin >> goalMessi >> assistMessi >> goalRonaldo >> assistRonaldo;
    solve(goalMessi, assistMessi, goalRonaldo, assistRonaldo);

    return 0;
}
