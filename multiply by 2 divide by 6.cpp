#include<bits/stdc++.h>
using namespace std;


int main(){
    int t; cin>>t;
    while(t--){
        int n,c;cin>>n; c=n;

        int c2=0,c3=0;
        while(c%2==0){
            c/=2; c2++;
        }
        while(c%3==0){
            c/=3; c3++;
        }

        if(c!=1) cout<<-1<<'\n';
        else{
            if(c3>=c2) cout<<2*c3-c2<<'\n';
            else cout<<-1<<'\n';
        }

    }
}


