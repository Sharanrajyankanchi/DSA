/*
link:https://codeforces.com/problemset/problem/828/B
*/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    int left = m, right = 0, up = n, down = 0, black = 0;
    string s;
    for (int j = 0; j < n; j++)
    {
        cin >> s;
        for (int i = 0; i < m; i++)
        {
            if (s[i] == 'B')
            {
                black++;
                up = min(j, up);
                down = max(j, down);
                left = min(i, left);
                right = max(i, right);
            }
        }
    }
    int side = max(down - up + 1, right - left + 1);
    if (black == 0)
        cout << 1;
    else if (down - up + 1 <= min(m, n) && right - left + 1 <= min(m, n))
        cout << side * side - black;
    else
        cout << -1;

    return 0;
}