#include <bits/stdc++.h>
using namespace std;
int cnt[25];
int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int n;cin>>n;
    while(n--){
    	int a;cin>>a;
    	cnt[a]++;
    }
    for(int i=1;i<=23;i++)cout<<cnt[i]<<" ";
    return 0;
}
