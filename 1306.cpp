#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;
vector<ll>F;
int mn[12]={2,3,5,7,11,13,17,19,23,29,31,37};
ll power(ll A,ll B,ll m){
    ll ret=1;
    A%=m;
    while(B){
        if(B%2) ret=(unsigned long long)ret*A%m;
        B/=2,A=(unsigned long long)A*A%m;
    }
    return ret;
}
ll Abs(ll x){
    if(x<0)x*=-1;
    return x;
}
bool ip(ll n,ll a){
    if(a%n==0) return true;
    ll k=n-1,t;
    t=power(a,k,n);
    if(t==1||t==n-1)return true;
    while(true){
        ll t=power(a,k,n);
        if(t==n-1)return true;
        if(k%2)return (t==1||t==n-1);
        else if(t==n-1)return false;
        k/=2;
    }
    return false;
}
bool ml(ll n){
    for(int i=0;i<12;i++)if(!ip(n,mn[i]))return false;
    return true;
}
ll g(ll x,ll n,int c){
    return ((unsigned long long)x*x%n+c)%n;
}
ll gcd(ll a,ll b){
    ll tmp;
    while(b!=0){
        tmp=a%b;
        a=b,b=tmp;
    }
    return a;
}
void fac(ll n){
    if(n==1) return;
    if(n%2==0){
        F.push_back(2);
        fac(n/2);
        return;
    }
    if(ml(n)){
        F.push_back(n);
        return;
    }
    ll d=1,x,y,c;
    x=y=rand()%(n-2)+2;
    c=rand()%20+1;
    while(d==1){
        x=g(x,n,c);
        y=g(g(y,n,c),n,c);
        d=gcd(Abs(x-y),n);
    }
    if(n==d){
        fac(n);
    }else{
        fac(d);
        fac(n/d);
    }
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    srand(time(NULL));
    int i;
    ll n,m;cin>>n>>m;
    while(n--){
        ll v;cin>>v;
        if(v==1){cout<<m/v<<"\n";continue;}
        F.clear();
        fac(v);
        sort(F.begin(),F.end());
        ll now=1,tmp=2;
        for(i=1;i<(int)F.size();i++){
            if(F[i]!=F[i-1]){
                now*=tmp;
                tmp=2;
            }else tmp++;
        }
        cout<<m/v+now*tmp-1<<"\n";
    }
    return 0;
}
