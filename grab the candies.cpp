#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;

    while(t--){
        int n,e=0,o=0;cin>>n;

        for(int i=0;i<n;i++){
            int x;cin>>x;
            if(x%2==0) e+=x;
            if(x%2==1) o+=x;
        }
        //cout<<e<<' '<<o<<'\n';
        if(e>o) cout<<"YES\n";
        else cout<<"NO\n";
    }
}



