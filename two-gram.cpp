#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;cin>>n;
    string s; cin>>s;
    vector<string>v;

    for(int i=0;i<n-1;i++){
        v.push_back(s.substr(i,2));
    }
    map<string,int>m;
    for(int i=0;i<v.size();i++){
        m[v[i]]++;
    }
    vector<pair<int,string>>vp;

    for(auto it:m){
        vp.push_back({it.second,it.first});
    }
    sort(vp.begin(),vp.end());
    cout<<vp.back().second<<'\n';

}
