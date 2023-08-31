#include <bits/stdc++.h>
using namespace std;
using ll=long long;
ll po(ll x,ll y){
    ll ret=1;
    while(y){
        if(y&1)ret*=x;
        x*=x;y>>=1;
    }
    return ret;
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    ll a,r,n;cin>>a>>r>>n;
    cout<<a*po(r,n-1);
    return 0;
}
