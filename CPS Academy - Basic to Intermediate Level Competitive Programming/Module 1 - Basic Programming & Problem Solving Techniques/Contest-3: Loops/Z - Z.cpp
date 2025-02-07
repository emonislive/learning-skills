#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve()
{
    vector<int> aliceMatch(3), bobMatch(3);

    for (int i = 0; i < 3; i++)
        cin >> aliceMatch[i];

    for (int i = 0; i < 3; i++)
        cin >> bobMatch[i];

    sort(aliceMatch.begin(), aliceMatch.end(), greater<>());
    sort(bobMatch.begin(), bobMatch.end(), greater<>());

    int scoreOfAlice = 0, scoreOfBob = 0, placeValue;

    placeValue = 100;
    for (int i = 0; i < 3; i++) // ? Digits to a whole number convert
    {
        scoreOfAlice += aliceMatch[i] * placeValue;
        placeValue /= 10;
    }

    placeValue = 100;
    for (int i = 0; i < 3; i++) // ? Digits to a whole number convert
    {
        scoreOfBob += bobMatch[i] * placeValue;
        placeValue /= 10;
    }

    if (scoreOfAlice > scoreOfBob)
        cout << "Alice" << endl;
    else if (scoreOfAlice < scoreOfBob)
        cout << "Bob" << endl;
    else
        cout << "Tie" << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int testCase;
    cin >> testCase;
    while (testCase--)
    {
        solve();
    }
    return 0;
}
