#include <bits/stdc++.h>
using namespace std;

int main(){
    string s; cin>>s;
    vector<int>v(s.size(),0);

    for(int i=1;i<s.size();i++){
        v[i]=v[i-1];
        if(s[i]==s[i-1]) v[i]++;

    }

    int m; cin>>m;
    while(m--){
        int ans=0;
        int l,r; cin>>l>>r;
        cout<<v[r-1]-v[l-1]<<'\n';
    }
}


