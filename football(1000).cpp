#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t; map<string,int>freq;

    while(t--){
        string s; cin>>s; freq[s]++;
    }

    int mx=-1;
    string s;

    for(auto &it:freq){
        if(mx<it.second){
            mx=it.second;
            s=it.first;
        }
    }
    cout<<s<<'\n';
}

