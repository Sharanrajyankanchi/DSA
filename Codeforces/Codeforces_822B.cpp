/*
link: https://codeforces.com/contest/822/problem/B
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
    string s, t;
    cin >> s >> t;
    int k = n, z = 0;
    for (int i = 0; i <= m - n; i++)
    {
        int k1 = 0;
        for (int j = 0; j < n; j++)
        {
            if (s[j] != t[j + i])
                k1++;
        }
        if (k1 < k)
        {
            k = k1;
            z = i;
        }
    }
    cout << k << endl;

    for (int i = 0; i < n; i++)
    {

        if (s[i] != t[i + z])
            cout << i + 1 << " ";
    }
    return 0;
}