#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int n;cin>>n;
    int ans=0;
    for(int i=1;i<=n;i++){
        if(!(i&1))ans+=i;
    }
    cout<<ans;
    return 0;
}
