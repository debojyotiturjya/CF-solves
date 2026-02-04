#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;cin>>t;

    while(t--){
        string s; cin>>s;
        int n=s[0]-'0';
        long long ans=(n-1)*10;
        for(int i=s.size();i>=0;i--) ans+=i;
        cout<<ans<<'\n';
    }
}


