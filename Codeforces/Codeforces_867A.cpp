/*
link : https://codeforces.com/problemset/problem/867/A
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    string s;
    cin >> s;
    if (s[0] == 'S' && s[n - 1] == 'F')
        cout << "YES";
    else
        cout << "NO";
    return 0;
}