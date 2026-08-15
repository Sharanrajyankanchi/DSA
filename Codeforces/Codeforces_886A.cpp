/*
link : https://codeforces.com/problemset/problem/886/A
*/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a[6] = {};
    int sum = 0;
    for (auto &x : a)
    {
        cin >> x;
        sum += x;
    }
    if (sum % 2 != 0)
    {
        cout << "NO";
        return 0;
    }
    for (int i = 0; i <= 4; i++)
    {
        for (int j = i + 1; j <= 5; j++)
        {
            for (int k = j + 1; k <= 6; k++)
            {
                if (a[i] + a[j] + a[k] == sum / 2)
                {
                    cout << "YES";
                    return 0;
                }
            }
        }
    }
    cout << "NO";

    return 0;
}