#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;cin>>t;

    while(t--){
        int n;cin>>n;

        vector<int>v;

        for(int i=0;i<n;i++){
            int x;cin>>x;
            v.push_back(x);
        }
        sort(v.begin(),v.end());

        bool ck=false;
        for(int i=1;i<n-1;i+=2){
            if(v[i+1]>v[i]){
                ck=true; break;
            }
        }
        if(!ck) cout<<"YES\n";
        if(ck) cout<<"NO\n";
    }
}





