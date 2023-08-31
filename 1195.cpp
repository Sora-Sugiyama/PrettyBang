#include <bits/stdc++.h>
using namespace std;
int A[23][23];
int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int n;cin>>n;
    while(n--){
    	int x,y;cin>>x>>y;
    	A[x][y]=1;
    }
    for(int i=1;i<=19;i++){
    	for(int j=1;j<=19;j++)cout<<A[i][j]<<" ";
    	cout<<"\n";
    }
    return 0;
}
