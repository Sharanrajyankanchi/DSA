/*
link : https://codeforces.com/problemset/problem/961/A
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    int c;
    while (m--)
    {
        cin >> c;
        ++a[c - 1];
    }
    auto mins = min_element(a.begin(), a.end());
    cout << *mins;
    return 0;
}