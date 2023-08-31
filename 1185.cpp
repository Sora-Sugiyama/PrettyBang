#include <bits/stdc++.h>
using namespace std;
using lf=double;
int main(){
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	cout<<fixed;
	cout.precision(2);
	lf w,h,b;cin>>w>>h>>b;
	cout<<w*h*b/double(1<<23)<<" MiB";
	return 0;
}
