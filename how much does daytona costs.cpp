#include <bits/stdc++.h>
using namespace std;


int main(){
     int t; cin>>t;

     while(t--){
        int n,k; cin>>n>>k;
        vector<int>v;

        for(int i=0;i<n;i++){
            int x;cin>>x; v.push_back(x);
        }
        int c=0;
        for(int i=0;i<n;i++){
            if(v[i]==k) c++;
        }
        if(c>0) cout<<"YES\n";
        else cout<<"NO\n";
     }
}


