/*
link: https://codeforces.com/contest/868/problem/A
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  string s;
  cin >> s;
  int n;
  cin >> n;
  bool f = false, b = false;
  string k;
  while (n--)
  {
    cin >> k;
    if (k[1] == s[0])
      f = true;
    if (k[0] == s[1])
      b = true;
    if (k == s)
    {
      f = true;
      b = true;
    }
  }
  cout << (f && b ? "YES" : "NO");
  return 0;
}