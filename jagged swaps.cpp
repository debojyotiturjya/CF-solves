#include <bits/stdc++.h>
using namespace std;


int main(){
     int t; cin>>t;

     while(t--){
        int x; cin>>x;
        vector<char>v;

        for(int i=0;i<x;i++){
            int c; cin>>c;
            v.push_back(c);
        }
        if(v[0]==1) cout<<"YES\n";
        else cout<<"NO\n";
        v.clear();

     }
}


