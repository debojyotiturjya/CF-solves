#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n,r,b; cin>>n>>r>>b;
        int pgnhl=r/(b+1),xtra=r%(b+1);
        string s="";
        for(int i=0;i<xtra;i++){
            s+=string(pgnhl+1,'R');
            s+='B';
        }
        for(int i=xtra;i<b;i++){
            s+=string(pgnhl,'R');
            s+='B';
        }
        s+=string(pgnhl,'R');

        cout<<s<<'\n';
    }
}

//do it again on your own
