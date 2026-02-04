#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n,k; cin>>n>>k;
        vector<int>v(n);
        for(int i=0;i<n;i++) cin>>v[i];

        int ans=INT_MAX,ec=0;
        for(int i=0;i<n;i++){
            if(v[i]%2==0) ec++;
            if(v[i]%k==0) ans=0;
            int p=k-(v[i]%k);
            ans=min(ans,p);
        }
        if(k==4){
            if(ec>=2) ans=0;
            else if(ec==1) ans=min(ans,1);
            else ans=min(ans,2);
        }
        cout<<ans<<'\n';
    }
}

