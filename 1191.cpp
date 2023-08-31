#include <bits/stdc++.h>
using namespace std;
int gcd(int x,int y){
	while(x%y){
		int z=x%y;x=y;y=z;
	}
	return y;
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int a,b,c;cin>>a>>b>>c;
    int t=a*b/gcd(a,b);
    cout<<t*c/gcd(t,c);
    return 0;
}
