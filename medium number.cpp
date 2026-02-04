#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;

    while(t--){
        int a,b,c; cin>>a>>b>>c;

        if(a!=max(a,max(b,c)) && a!=min(a,min(b,c))) cout<<a<<'\n';
        if(b!=max(a,max(b,c)) && b!=min(a,min(b,c))) cout<<b<<'\n';
        if(c!=max(a,max(b,c)) && c!=min(a,min(b,c))) cout<<c<<'\n';
    }
}

