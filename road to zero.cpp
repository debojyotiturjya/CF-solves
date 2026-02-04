#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int x,y,a,b; cin>>x>>y>>a>>b;
        int xabs=abs(x), yabs=abs(y);
        b=min(b,2*a);
        long long ans=1LL* min(xabs,yabs)*b+ 1LL*a*(max(xabs,yabs)-min(xabs,yabs));
        cout<<ans<<'\n';
    }
}


