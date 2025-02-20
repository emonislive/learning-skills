#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define fast_io() ios::sync_with_stdio(false); cin.tie(nullptr);

void solve(ll size, ll cards) {
    ll cardTemp = cards;
    vector <ll> vec(size), vec2;

    for (auto& in : vec)
        cin >> in;

    ll i = 1;
    while (cards--) {
        vec2.insert(vec2.begin(), vec[size - i]);
        i++;
    }
    for (ll i = 0; i < size - cardTemp; i++)
        vec2.push_back(vec[i]);

    for (auto in : vec2)
        cout << in << " ";
}

int main() {
    fast_io();
    ll size, cards;
    cin >> size >> cards;
    solve(size, cards);
    return 0;
}
