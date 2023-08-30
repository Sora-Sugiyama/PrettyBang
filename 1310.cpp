#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ll a,b,r,c,d;cin>>a>>b>>r>>c>>d;
    ll dist=(a-c)*(a-c)+(b-d)*(b-d);
    cout<<(dist>r*r?"out":(dist<r*r?"in":"on"));
    return 0;
}
