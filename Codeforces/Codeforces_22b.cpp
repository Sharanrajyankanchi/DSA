/*
link : https://codeforces.com/problemset/problem/22/B
*/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int string_count(bitset<25> n, int m)
{
    int k = 0, l = 0;
    for (int i = 0; i < m; i++)
    {
        if (n[i] == 0)
        {
            k++;
            l = max(l, k);
        }
        else
            k = 0;
    }
    return l;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int m, n;
    cin >> n >> m;
    vector<bitset<25>> a(n);
    for (auto &x : a)
        cin >> x;
    vector<vector<bitset<25>>> b(n, vector<bitset<25>>(n));
    int c = 0, ans = 0, z;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            if (i == j)
            {
                b[i][j] = a[i];
            }
            else
            {
                b[i][j] = a[j] | b[i][j - 1];
            }
            z = string_count(b[i][j], m);
            if (z != 0)
                c = 2 * ((j - i + 1) + z);
            ans = max(ans, c);
        }
    }
    cout << ans;
    return 0;
}