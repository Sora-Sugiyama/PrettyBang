#include <bits/stdc++.h>
using namespace std;
void f(int x){
    if(x<10)cout<<0<<x;else cout<<x;
}
void g(int x){
    if(x<1000)cout<<0;
    if(x<100)cout<<0;
    cout<<x;
}
int main(){
    int a,b,c;
    scanf("%d.%d.%d",&a,&b,&c);
    g(a);cout<<".";f(b);cout<<".";f(c);
    return 0;
}
