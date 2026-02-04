#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m; cin>>n>>m;
    vector<int>v;
    for(int i=0;i<n;i++){
        int x; cin>>x; v.push_back(x);
    }
    vector<pair<int,int>>vp;

    for(int i=0;i<n;i++){
        vp.push_back({v[i],i+1});
    }

    while(vp.size()>1){
        if(vp[0].first<=m) vp.erase(vp.begin());
        else{
            int rem=vp[0].first-m;
            vp.push_back({rem,vp[0].second});
            vp.erase(vp.begin());
        }
    }
    cout<<vp[0].second<<'\n';
}


