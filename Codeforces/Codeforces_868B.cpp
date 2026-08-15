/*
link:https://codeforces.com/contest/868/problem/B
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    double h, m, s, t1, t2;
    cin >> h >> m >> s >> t1 >> t2;
    h += (m / 60 + s / 3600);
    m = m / 5 + s / 300;
    s /= 5;
    double arr[] = {h, m, s, t1, t2};
    sort(arr, arr + 5);
    int k = abs(find(arr, arr + 5, t1) - find(arr, arr + 5, t2));
    if (k == 1 || k == 4)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}