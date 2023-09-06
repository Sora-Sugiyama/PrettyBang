#include <bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	int n;cin>>n;
	for(int i=1;i<=n*n;i++){
		cout<<i<<" ";
		if(i%n==0)cout<<"\n";
	}
	return 0;
}
