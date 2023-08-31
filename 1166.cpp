#include <bits/stdc++.h>
using namespace std;
int main(){
	int a;cin>>a;
	cout<<(a<0?"minus\n":"plus\n")<<(a&1?"odd":"even");
	return 0;
}
