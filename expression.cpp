#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c; cin>>a>>b>>c;
    int x=a+b+c,xx=(a+b)*c,xxx=a*(b+c),xxxx=a*b*c;
    int ans=max(x,max(xx,max(xxx,xxxx)));
    cout<<ans<<'\n';
}



