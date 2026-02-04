#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;cin>>t;

    while(t--){
        string s; cin>>s;
        if(s.size()==2) cout<<s<<'\n';
        else{
            string ans=""; ans+=s[0];

            for(int i=1;i<s.size()-2;i+=2){
                if(s[i]==s[i+1]) ans+=s[i];
                else ans+=s[i]+s[i+1];
            }
            ans+=s[s.size()-1];
            cout<<ans<<'\n';
        }
    }
}


