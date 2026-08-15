/*
link : https://codeforces.com/problemset/problem/869/B
*/
#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int unit(ll a,ll b){
if(b-a>=10)return 0;
int k=1;
for(ll i=a+1;i<=b;i++){
    k*=(i%10);

}
return k%10;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
ll a,b;
cin>>a>>b;
cout<<unit(a,b);
    

    return 0;
}