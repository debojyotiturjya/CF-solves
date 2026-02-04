#include<bits/stdc++.h>
using namespace std;
int main() {
    int t; cin>>t;
    while(t--){
        int n,k; cin>>n>>k;
        string s,ans=""; cin>>s;
        for(int i=0;i<n;i++) ans+='+';
        sort(s.begin(),s.end());

        if(n==k){
            for(int i=0;i<n;i++) cout<<'-';
            cout<<'\n';
        }
        else{
            int f=0,b=1;
            for(int i=0;i<k;i++){

                if(s[i]=='0'){
                    ans[f]='-';f++;
                }
                else if(s[i]=='1'){
                    ans[n-b]='-';b++;
                }
                else{
                    ans[f]='?';f++;
                    ans[n-b]='?';b++;
                }
            }
            cout<<ans<<'\n';
        }

    }
}

