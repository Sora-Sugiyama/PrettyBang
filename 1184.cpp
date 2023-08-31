#include <bits/stdc++.h>
using namespace std;
using lf=double;
int main(){
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	cout<<fixed;
	cout.precision(1);
	lf h,b,c,s;cin>>h>>b>>c>>s;
	cout<<h*b*c*s/double(1<<23)<<" MiB";
	return 0;
}
