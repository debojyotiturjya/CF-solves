#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;

    while(t--){
        int n; cin>>n;
        string s; cin>>s;
        map<char,int>m;

        for(int i=0;i<n;i++){
            m[s[i]]++;
        }
        vector<pair<int,char>>v;

        for(auto i:m){
            v.push_back({i.second,i.first});
        }
        sort(v.begin(),v.end());
        char tbr=v.begin()->second,rw=v.rbegin()->second;

        for(int i=0;i<n;i++){
            if(s[i]==tbr){
                s[i]=rw; break;
            }
        }
        cout<<s<<'\n';
    }
}

