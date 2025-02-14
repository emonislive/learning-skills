#include <bits/stdc++.h>
using namespace std;

void solve() {
    int number;
    cin >> number;
    string numToString = to_string(number);
    vector<int> roundNumbers;

    for (int i = 0; i < numToString.size(); i++) {
        if (numToString[i] != '0') {
            int digit = numToString[i] - '0';
            int power = numToString.size() - i - 1;
            int roundNumber = digit * pow(10, power);
            roundNumbers.push_back(roundNumber);
        }
    }
    cout << roundNumbers.size() << endl;
    for (int num : roundNumbers) {
        cout << num << " ";
    }
    cout << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int testCase;
    cin >> testCase;
    while (testCase--) {
        solve();
    }
    return 0;
}
