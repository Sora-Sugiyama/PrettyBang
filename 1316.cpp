#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll c[3003],S[3003];
int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int n;cin>>n;
    for(int i=1;i<=n;i++){
        cin>>c[i];
        S[i]=S[i-1]+c[i];
    }
    int a,b;cin>>a>>b;
    int ans=0;
    for(int i=1;i<=n;i++){
        for(int j=i;j<=n;j++){
            if(S[j]-S[i-1]==S[b]-S[a-1])ans++;
        }
    }
    cout<<ans;
    return 0;
}
