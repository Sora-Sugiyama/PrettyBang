#include <bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	int n;cin>>n;
	t:
	if(n){
		n--;
		int a;cin>>a;cout<<a<<"\n";
		goto t;
	}
	return 0;
}
