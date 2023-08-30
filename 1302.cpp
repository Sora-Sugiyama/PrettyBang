#include <bits/stdc++.h>
using namespace std;
bool A[103],B[103];
int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int n,a,b;cin>>n>>a>>b;
    while(a--){
        int k;cin>>k;
        A[k]=true;
    }
    int ans1=0,ans2=0;
    while(b--){
        int k;cin>>k;
        B[k]=true;
    }
    for(int i=1;i<=n;i++){
        if(A[i]&&B[i])ans2++;
        if(!A[i]&&!B[i])ans1++;
    }
    cout<<ans1<<" "<<ans2;
    return 0;
}
