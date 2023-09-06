#include <bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	int n;cin>>n;
	for(int i=0,j=1;j<=n;i++){
		cout<<j*n-i<<" ";
		if(i==n-1){
			j++;
			i=-1;
			cout<<"\n";
		}
	}
	return 0;
}
