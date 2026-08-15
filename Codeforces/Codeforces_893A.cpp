/*
link:https://codeforces.com/problemset/problem/893/A
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int w, l, s = 3;
    while (n--)
    {
        cin >> w;
        if (w == s)
        {
            cout << "NO";
            return 0;
        }
        s = 6 - w - s;
    }
    cout << "YES";

    return 0;
}