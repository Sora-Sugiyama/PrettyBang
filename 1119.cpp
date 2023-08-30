#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    string s;cin>>s;
    for(char x:s){
        if(x!='-')cout<<x;
    }
    return 0;
}
