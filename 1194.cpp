#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int n;cin>>n;
    int ans;cin>>ans;n--;
    while(n--){
    	int a;cin>>a;
    	ans=min(ans,a);
    }
    cout<<ans;
    return 0;
}
