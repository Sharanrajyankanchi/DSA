#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        
        int n, k;
        cin >> n >> k;
        int p=1,s;
        for(int i=0;i<32;i++){
            if(k*(p-1)<=n){p<<=1;s=i;}
            
        }
        p>>=1;
        int q=(n-(k*(p-1)));
        cout<<k*(s)+q/p<<endl;}

    return 0;
}