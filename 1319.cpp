#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
bool sieve[33]={true,true};
int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    for(int i=2;i<=5;i++){
        if(sieve[i])continue;
        for(int j=i*2;j<=31;j+=i)sieve[j]=true;
    }
    ll n;cin>>n;
    ll now=1;n--;
    int day=1,ans=1;
    while(n>0){
        day++;ans++;
        if(day>=32)day=1;
        if(!sieve[day]){
            now*=3;
            n-=now;
        }else{
            now*=2;
            n-=now;
        }
    }
    cout<<ans;
    return 0;
}
