/*
    Pentagon Representation:

         A
       /   \
      /     \ 
     E       B
     |       |
     D-------C

    - The points A, B, C, D, and E form a regular pentagon.
    - Edges between the points represent direct connections.
    - The distances between two points can wrap around, meaning you can go clockwise or counterclockwise.
    - Example:
        Distance from A to C:
        - Clockwise: A -> B -> C (2 steps)
        - Counterclockwise: A -> E -> D -> C (3 steps)
        The minimum distance is 2.
*/

#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve(char s1, char s2, char t1, char t2)
{
    // clockwise distance = abs(x - y)
    // Counterclockwise distance = 5 - abs(x - y)
    int val = min(abs(s1 - s2), 5 - abs(s1 - s2));
    int val2 = min(abs(t1 - t2), 5 - abs(t1 - t2));

    if (val == val2)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    char s1, s2, t1, t2;
    cin >> s1 >> s2 >> t1 >> t2;
    solve(s1, s2, t1, t2);
    
    return 0;
}
