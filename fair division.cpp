#include<bits/stdc++.h>
using namespace std;


int main(){
    int t; cin>>t;
    while(t--){
        int n,c=0,o=0,t=0;cin>>n;
        for(int i=0;i<n;i++){
            int x; cin>>x; c+=x;
            if(x==1) o++; else t++;
        }
        if(c%2==0 &&(o>0 || t%2==0)) cout<<"YES\n";
        else cout<<"NO\n";

    }
}

