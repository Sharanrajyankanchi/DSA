#include <bits/stdc++.h>
using namespace std;
using ll=long long;
vector<int>c(LLONG_MAX,0);
bool distinct(ll a){
    vector<int>b(10);
    while(a!=0){
     ++b[a%10];
     a/=10;
    }
    int cnt=0;
    for(int i=0;i<10;i++){
     if(b[i]!=0)cnt++;
    }
    if(cnt>2)return false;
    return true;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
ll t;
cin>>t;
 for(ll i=2;i<LLONG_MAX;i++){
if(distinct(i)){c[i]=1;break;}

    }
while(t--){
    ll x;cin>>x;
    vector<int>a(1e9+1);
    for(ll i=2;i<=1e9;i++){
        if(c[i]&&c[x*i]){cout<<i<<endl;break;}
    }
   
}
    

    return 0;
}