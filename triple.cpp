#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;

    while(t--){
        int n;cin>>n; map<int,int>m;

        for(int i=0;i<n;i++){
            int x;cin>>x;
            m[x]++;
        }

        int c=-1;
        for(auto f: m){
            if(f.second>=3) c=f.first;
        }

        cout<<c<<'\n';
    }
}



