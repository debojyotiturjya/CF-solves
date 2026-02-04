#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t; int co=0;

    while(t--){
        int a,b,c,d; cin>>a;
        cin>>b; if(b>a) co++;
        cin>>c; if(c>a) co++;
        cin>>d; if(d>a) co++;

        cout<<co<<'\n';
        co=0;
    }
}

