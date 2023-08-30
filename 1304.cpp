#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int n;cin>>n;
    int ans=n/10;n%=10;ans+=n/5;n%=5;ans+=n/3;n%=3;ans+=n;
    cout<<ans;
    return 0;
}
