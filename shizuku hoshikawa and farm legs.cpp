#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;cin>>t;

    while(t--){
        int n; cin>>n;
        if(n%2!=0) cout<<0<<'\n';
        else if(n%4==0) cout<<(n/4)+1<<'\n';
        else{
            if(n>=2 && n<6) cout<<n/2<<'\n';
            else cout<<(n/4)+1<<'\n';
        }
    }
}


