#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main(){
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	ll a,m,d,n;cin>>a>>m>>d>>n;
	for(int i=1;i<n;i++)a=a*m+d;
	cout<<a;
	return 0;
}
