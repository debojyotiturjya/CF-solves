#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    int c;

    while(t--){
        int a,b;cin>>a>>b;
        if(a%b!=0){
            c=b-(a%b); cout<<c<<'\n';
        }
        else cout<<0<<'\n';

        c=0;
    }

}

