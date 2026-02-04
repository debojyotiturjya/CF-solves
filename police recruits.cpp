#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    int co=0,c=0;

    while (t--){
        int i; cin>>i;
        c+=i;

        if(c==-1){
            co+=c;
            c=0;
        }
    }
    cout<<abs(co)<<'\n';

}

