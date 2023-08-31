#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int n;cin>>n;
    stack<int>S;
    while(n--){
    	int a;cin>>a;
    	S.push(a);
    }
    while(!S.empty()){
    	cout<<S.top()<<" ";
    	S.pop();
    }
    return 0;
}
