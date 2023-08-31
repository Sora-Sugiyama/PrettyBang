#include <bits/stdc++.h>
using namespace std;
int A[103][103];
int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int w,h,n;cin>>h>>w>>n;
    while(n--){
    	int l,d,x,y;cin>>l>>d>>x>>y;
    	if(d){
    		for(int i=x;i<x+l;i++)A[i][y]=1;
    	}else{
    		for(int i=y;i<y+l;i++)A[x][i]=1;
    	}
    }
    for(int i=1;i<=h;i++){
    	for(int j=1;j<=w;j++)cout<<A[i][j]<<" ";
    	cout<<"\n";
    }
    return 0;
}
