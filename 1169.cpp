#include <bits/stdc++.h>
using namespace std;
int main(){
	int a;cin>>a;a%=12;
	if(a<3)cout<<"winter";
	else if(a<6)cout<<"spring";
	else if(a<9)cout<<"summer";
	else cout<<"fall";
	return 0;
}
