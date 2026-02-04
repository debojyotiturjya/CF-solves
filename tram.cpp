#include<bits/stdc++.h>

using namespace std ;

int main(){
    int t,u,d,s=0,ps,mx=0,mxx,i; cin>>t;

    while(t--){
        cin>>d>>u;
        ps=s;
        s=s+(u-d);
        mxx= max(ps,s);
        mx=max(mxx,mx);
    }
    cout<<mx<<'\n';
}

