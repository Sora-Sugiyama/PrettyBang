#include <bits/stdc++.h>
using namespace std;
int A[303][303];
int main(){
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	int n;cin>>n;
	int cnt=0;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			A[i][j]=++cnt;
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++)cout<<A[j][i]<<" ";
		cout<<"\n";
	}
	return 0;
}
