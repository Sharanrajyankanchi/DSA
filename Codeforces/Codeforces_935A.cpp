/*
link: https://codeforces.com/problemset/problem/935/A
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int count = 1;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0 && i * i != n)
            count += 2;
        else if (n % i == 0)
            count++;
    }
    cout << count;
    return 0;
}