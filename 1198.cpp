#include <bits/stdc++.h>
using namespace std;
int A[13][13];
int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    for(int i=1;i<=10;i++){
        for(int j=1;j<=10;j++)cin>>A[i][j];
    }
    bool stop=(A[2][2]==2);
    A[2][2]=9;
    int x=2,y=2;
    while(!stop){
        if(y<=9&&(A[x][y+1]==2||!A[x][y+1])){
            y++;
            if(A[x][y]==2)stop=true;
            A[x][y]=9;
        }else if(x<=9&&(A[x+1][y]==2||!A[x+1][y])){
            x++;
            if(A[x][y]==2)stop=true;
            A[x][y]=9;
        }else break;
    }
    for(int i=1;i<=10;i++){
        for(int j=1;j<=10;j++)cout<<A[i][j]<<" ";
        cout<<"\n";
    }
    return 0;
}
