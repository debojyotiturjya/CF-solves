#include<bits/stdc++.h>

using namespace std ;

int main(){
    string s,t; cin>>s>>t;
    int n=s.size(), m=t.size(),c=0;
    if(n==m){
        for(int i=n-1,j=0;i>=0,j<m;i--,j++){
            if(s[i]==t[j]) c++;
    }
    if (c==n) cout<<"YES\n";
    else cout<<"NO\n";
    }
    else cout<<"NO\n";
}

