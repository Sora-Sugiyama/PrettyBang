#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    long long a,b;cin>>a>>b;
    cout<<fixed;
    cout.precision(2);
    cout<<a+b<<"\n"<<a-b<<"\n"<<a*b<<"\n"<<a/b<<"\n"<<a%b<<"\n"<<double(a)/double(b);
    return 0;
}
