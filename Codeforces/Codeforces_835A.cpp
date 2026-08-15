/*
link: https://codeforces.com/contest/835/problem/A
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int s, v1, v2, t1, t2;
    cin >> s >> v1 >> v2 >> t1 >> t2;
    int r1 = v1 * s + 2 * t1, r2 = v2 * s + 2 * t2;
    if (r1 < r2)
        cout << "First" << endl;
    else if (r2 < r1)
        cout << "Second" << endl;
    else
        cout << "Friendship" << endl;

    return 0;
}