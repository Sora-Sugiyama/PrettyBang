#include <bits/stdc++.h>
using namespace std;
set<string>ss;
int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    string dad,mom;cin>>dad>>mom;
    for(int i=0;i<2;i++){
        string tmp="";tmp.push_back(dad[i]);
        for(int j=0;j<2;j++){
            tmp.push_back(mom[j]);
            string pmt=tmp;
            sort(pmt.begin(),pmt.end());
            if(pmt[1]=='O'||pmt[0]==pmt[1])pmt.pop_back();
            ss.insert(pmt);
            tmp.pop_back();
        }
    }
    set<string>::iterator it;
    for(it=ss.begin();it!=ss.end();it++)cout<<*it<<" ";
    return 0;
}
