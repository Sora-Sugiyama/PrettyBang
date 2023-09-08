#include <bits/stdc++.h>
using namespace std;
int A[303][303];
int main(){
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	int n,m;cin>>n>>m;
	int cnt=0;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			A[i][j]=++cnt;
		}
	}
	for(int i=n;i>0;i--){
		for(int j=m;j>0;j--)cout<<A[i][j]<<" ";
		cout<<"\n";
	}
	return 0;
}
