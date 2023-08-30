#include <bits/stdc++.h>
using namespace std;
vector<vector<int> >a;
int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int m;cin>>m;
    for(int i=0;i<m;i++){
        int A;cin>>A;
        a.push_back({0,i,A});
    }
    int n;cin>>n;
    for(int i=0;i<m;i++){
        if(a[i].back()<n)a[i][0]=1;
        else if(a[i].back()==n)a[i][0]=2;
        else a[i][0]=3;
    }
    sort(a.begin(),a.end());
    for(int i=0;i<m;i++)cout<<a[i].back()<<" ";
    return 0;
}
