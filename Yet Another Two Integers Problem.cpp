#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t; int co=0;

    while(t--){
        int a,b; cin>>a>>b;
        int d=abs(a-b);
        int r=(d+9)/10;
        cout<<r<<'\n';
    }
}

