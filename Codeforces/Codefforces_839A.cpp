/*
link : https://codeforces.com/problemset/problem/839/A
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k, b = 0, sum = 0, day = 0;
    cin >> n >> k;
    while (n--)
    {
        int x;
        cin >> x;
        x += b;
        b = max(x - 8, 0);
        x = min(8, x);
        sum += x;
        day++;
        if (sum >= k)
            break;
    }
    if (sum >= k)
        cout << day;
    else
        cout << -1;
    return 0;
}