#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int l,r; cin>>l>>r;
        if(l==r) cout<<l<<'\n';
        else if(r-l>=99){
            long long ans=(l/100)*100+90;
            if(ans<l) ans+=100;
            cout<<ans<<'\n';
        }
        else if(l<10 &&r<10) cout<<max(l,r)<<'\n';
        else{
            int ans=0;string sans;
            for(int i=l;i<=r;i++){
                int tmp=i;
                string s= to_string(tmp),ss=s;
                sort(ss.begin(),ss.end());
                int b=ss[0]-'0',e=ss[ss.size()-1]-'0';
                int esx=abs(b-e);
                if(esx>ans){
                    ans=esx; sans=s;
                }
            }
            cout<<sans<<'\n';
        }
    }
}


