#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;cin>>t;
    vector<pair<int,int>>v;

    while(t--){
        int x,y; cin>>x>>y;
        v.push_back({x,y});
    }
    sort(v.begin(),v.end());

    bool teamalex=false;
    for(int i=0;i<v.size()-1;i++){
        if(v[i].second>v[i+1].second){
            teamalex=true; break;
        }
    }
    if(teamalex) cout<<"Happy Alex\n";
    else cout<<"Poor Alex\n";

}


