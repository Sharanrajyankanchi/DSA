/*
link: https://codeforces.com/problemset/problem/939/A
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    bool ans = false;
    vector<int> a(n);
    for (auto &x : a)
        cin >> x;
    for (int i = 0; i < n; i++)
    {
        if (i + 1 == a[a[a[i] - 1] - 1])
        {
            ans = true;
            break;
        }
    }
    if (ans)
        cout << "YES";
    else
        cout << "No";
    return 0;
}