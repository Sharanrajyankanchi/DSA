/*
link : https://codeforces.com/problemset/problem/938/B
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long int n, k;
    cin >> n >> k;
    long long int type, num, rem = LLONG_MAX;
    long long int a, b = k;
    while (k--)
    {
        cin >> a;
        if (rem > min(rem, n % a))
        {
            type = b - k;
            num = n / a;
            rem = n % a;
        }
    }
    cout << type << " " << num;
    return 0;
}