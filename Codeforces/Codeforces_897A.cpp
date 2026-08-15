/*
link: https://codeforces.com/contest/897/problem/A
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
    string s;
    cin >> s;
    while (m--)
    {
        int l, r;
        char c1, c2;
        cin >> l >> r >> c1 >> c2;
        for (int i = l - 1; i + 1 <= r; i++)
        {
            if (s[i] == c1)
                s[i] = c2;
        }
    }
    cout << s;
    return 0;
}