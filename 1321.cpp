#include <bits/stdc++.h>
using namespace std;
int M[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
string DOW[7]={"MON","TUE","WED","THU","FRI","SAT","SUN"};
int gcd(int x,int y){
    int z;
    while(x%y){
        z=x%y;x=y;y=z;
    }
    return y;
}
void pr(int x){
    if(x<10)cout<<"0"<<x;
    else cout<<x;
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int a,b,c;cin>>a>>b>>c;
    int lcm=a*b/gcd(a,b);lcm=lcm*c/gcd(lcm,c);
    int yy=2100,mm=1,dd=1,dow=4;
    while(lcm--){
        dd++;
        dow=(dow+1)%7;
        if(dd>M[mm]){
            mm++;
            if(mm==2){
                if((yy%4==0&&yy%100)||yy%400==0)M[mm]=29;else M[mm]=28;
            }
            if(mm>11){
                mm=1;
                yy++;
            }
            dd=1;
        }
    }
    cout<<yy<<"-";pr(mm);cout<<"-";pr(dd);cout<<" "<<DOW[dow];
    return 0;
}
