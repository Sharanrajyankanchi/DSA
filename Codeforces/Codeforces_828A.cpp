/*
link: https://codeforces.com/problemset/problem/828/A
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, a, b, c = 0;
    cin >> n >> a >> b;
    int d = 0;
    while (n--)
    {
        int t;
        cin >> t;
        if (t == 1 && a >= 1)
            a--;
        else if (t == 1 && b >= 1)
        {
            c++;
            b--;
        }
        else if (t == 1 && c >= 1)
        {
            c--;
        }
        else if (t == 2 && b >= 1)
            b--;
        else
            d += t;
    }
    cout << d;

    return 0;
}