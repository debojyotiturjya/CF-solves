#include<bits/stdc++.h>

using namespace std ;

int main(){
    int t,co=0; cin>>t;
    while (t--){
        int x,y,z; cin>>x>>y>>z;
        if (x+y+z>=2) co+=1;
    }
    cout<<co<<'\n';

}

