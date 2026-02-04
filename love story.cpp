#include<bits/stdc++.h>

using namespace std ;

int main(){
    string c="codeforces"; int t, co=0; cin>>t;

    while(t--){
        string s; cin>>s;
        for(int i=0;i<10;i++){
            if(c[i]!=s[i]) co+=1;
    }
    cout<<co<<'\n';
    co=0;

    }

}

