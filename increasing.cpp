#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,c; cin>>t; c=t;

    while(c--){
        int x;cin>>x;
        vector<int>v;

        for(int i=0;i<x;i++){
            int n; cin>>n;
            v.push_back(n);
        }
        sort(v.begin(),v.end());

        if(v.size()==1) cout<<"YES\n";
        else{
            bool check=true;
            for(int i=0;i<v.size()-1;i++){
                if(v[i]==v[i+1]){
                    check=false;
                    break;
                  }
                }
                if(check==true) cout<<"YES\n";
                else cout<<"NO\n";
            }
    }
}

