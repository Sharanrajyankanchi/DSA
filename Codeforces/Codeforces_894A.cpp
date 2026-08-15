/*
link: https://codeforces.com/contest/894/problem/A
*/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    int n = s.size(), l = 0, r = 0, ans = 0;
    vector<int> lc(n, 0), rc(n, 0);
    for (int i = 0; i < n; i++)
    {
        lc[i] = l;
        rc[n - i - 1] = r;
        if (s[i] == 'Q')
            l++;
        if (s[n - i - 1] == 'Q')
            r++;
    }
    for (int i = 1; i + 1 < n; i++)
    {
        if (s[i] == 'A')
            ans += lc[i] * rc[i];
    }
    cout << ans;
    return 0;
}