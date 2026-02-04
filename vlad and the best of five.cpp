#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;

    while(t--){
        string s; cin>>s; int coA=0,coB=0;
        for (int i=0;i<s.length();i++){
            if(s[i]=='A') coA++;
            else coB++;
        }
        if(coA>=coB) cout<<'A'<<'\n';
        else cout<<'B'<<'\n';
        coA=0;coB=0;
    }
}

