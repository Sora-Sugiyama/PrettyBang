#include <bits/stdc++.h>
using namespace std;
string po10[13]={"","0","00","000","0000","00000"};
int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    string s;cin>>s;
    int n=1;
    for(char x:s){
        cout<<"["<<x<<po10[s.size()-n]<<"]\n";
        n++;
    }
    return 0;
}
