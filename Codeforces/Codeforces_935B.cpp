/*
link : https://codeforces.com/problemset/problem/935/B
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, x = 0, y = 0, sp = 0;
    cin >> n;
    string s;
    cin >> s;
    for (int i = 0; i + 1 < n; i++)
    {
        if (s[i] == 'U')
            y++;
        else
            x++;
        if (x == y && s[i] == s[i + 1])
            sp++;
    }
    cout << sp << endl;
    return 0;
}