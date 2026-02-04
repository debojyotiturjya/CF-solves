#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;cin>>t;

    while(t--){
        string s; cin>>s;
        int c1=0,c0=0,z=s.size();

        for(int i=0;i<z;i++){
            if(s[i]=='0') c0++;
            if(s[i]=='1') c1++;
        }
        int co=min(c0,c1);

        if(co==0 || co%2==0) cout<<"NET\n";
        if(co%2==1) cout<<"DA\n";

    }
}

