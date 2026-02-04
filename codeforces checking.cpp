#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;

    while(t--){
        string c="codeforces"; char s; cin>>s;
        int co=0;

        for (int i=0;i<c.length();i++){
            if(c[i]==s){
                co++;
            }
        }
        if(co>0) cout<<"YES\n";
        else cout<<"NO\n";
    }
}

