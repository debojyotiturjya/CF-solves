#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;cin>>t;

    while(t--){
        int n,k; cin>>n>>k;
        vector<int>v;

        for(int i=0;i<n;i++){
            int x; cin>>x;
            v.push_back(x);
        }
        sort(v.begin(),v.end());

        if(n==1) cout<<0<<'\n';
        else{
            int c=1,lsa=1;
            for(int i=0;i<n-1;i++){
                if(v[i+1]-v[i]<=k) lsa++;
                else lsa=1;

                c=max(c,lsa);
            }
            cout<<n-c<<'\n';
        }

    }

}


