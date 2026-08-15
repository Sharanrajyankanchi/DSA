/*
link : https://codeforces.com/problemset/problem/907/A
*/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int v1, v2, v3, vm, a, b;
    cin >> v1 >> v2 >> v3 >> vm;
    a = v1;
    b = v2;
    v1 = (v1 <= 2 * vm) ? 2 * vm + 1 : v1;
    v2 = (v2 <= 2 * vm) ? 2 * vm + 1 : v2;
    if (vm < v3)
        swap(vm, v3);

    for (int i = v1; i <= 2 * a; i++)
    {
        for (int j = v2; j <= 2 * b; j++)
        {
            for (int k = vm; k <= 2 * v3; k++)
            {
                if (i > j && j > k)
                {
                    cout << i << '\n'
                         << j << '\n'
                         << k << '\n';
                    return 0;
                }
            }
        }
    }
    cout << -1;
    return 0;
}