#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int>v;
        for(int i=0;i<n;i++){
            int x; cin>>x;
            v.push_back(x);
        }
        if(n!=v[0]) cout<<"NO\n";
        else{
            vector<int>ans(n,0);
            for(int i=0;i<n;i++){
                ans[v[i]-1]++;
            }
            for(int i=n-2;i>=0;i--){
                ans[i]+=ans[i+1];
            }

            //for(int x:ans) cout<<x<<' ';
            bool ck=true;
            for(int i=0;i<n;i++){
                if(v[i]!=ans[i]){
                    ck=false; break;
                }
            }
            if(ck) cout<<"YES\n";
            else cout<<"NO\n";
        }
    }
}


