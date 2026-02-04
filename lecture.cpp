#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m; cin>>n>>m;
    map<string,string>mp;

    for(int i=0;i<m;i++){
        string a,b; cin>>a>>b;
        int sa=a.size(),sb=b.size();
        if(sb<sa) mp[a]=b;
        else mp[a]=a;
    }

    vector<string>v;
    for(int i=0;i<n;i++){
        string x; cin>>x;
        v.push_back(x);
    }

    for(auto &vit:v){
        vit=mp[vit];
    }
    for(auto it:v){
        cout<<it<<" ";
    }

}


