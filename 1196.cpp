#include <bits/stdc++.h>
using namespace std;
int A[23][23];
int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    for(int i=1;i<=19;i++){
        for(int j=1;j<=19;j++)cin>>A[i][j];
    }
    int n;cin>>n;
    while(n--){
    	int x,y;cin>>x>>y;
    	for(int i=1;i<=19;i++){
    		A[i][y]^=1;
    		A[x][i]^=1;
    	}
    }
    for(int i=1;i<=19;i++){
    	for(int j=1;j<=19;j++)cout<<A[i][j]<<" ";
    	cout<<"\n";
    }
    return 0;
}
