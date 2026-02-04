#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n,k; cin>>n>>k;

        vector<pair<int,int>>vp;
        for(int i=1;i<=n;i++){
            int x; cin>>x;
            if(x%k==0) vp.push_back({-k,i});
            else vp.push_back({-(x%k),i});
        }

        sort(vp.begin(),vp.end());
        vector<int>vans;
        for(int i=0;i<vp.size();i++){
            vans.push_back(vp[i].second);
        }
        for(int x:vans) cout<<x<<' ';
        cout<<'\n';

    }
}
