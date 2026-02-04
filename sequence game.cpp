#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;

    while(t--){
        int n;cin>>n; vector<int>v,b;
        for(int i=0;i<n;i++){
            int x; cin>>x;
            v.push_back(x);
        }
        b.push_back(v[0]);
        if(v.size()==1){
            cout<<v.size()<<'\n';
            cout<<v[0];
            cout<<'\n';
        }
        else{
            for(int i=1;i<v.size();i++){
                if(v[i-1]>v[i]) b.push_back(v[i]);
                b.push_back(v[i]);
            }
            cout<<b.size()<<'\n';
            for(int x:b) cout<<x<<' ';
            cout<<'\n';
        }

    }
}

