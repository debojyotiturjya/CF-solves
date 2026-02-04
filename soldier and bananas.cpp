#include<bits/stdc++.h>

using namespace std ;

int main(){
    int a,b,c,d=0; cin>>a>>b>>c;
    for(int i=1;i<=c;i++){
        d=d+(a*i);
    }
    if(d-b>0) cout<<d-b<<'\n';
    else cout<<'0'<<'\n';

}


