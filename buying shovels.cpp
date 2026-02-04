#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        long long n,k; cin>>n>>k;

        if(n<=k) cout<<1<<'\n';
        else{
            vector<long long>v;
            for(int i=1;i<=sqrt(n);i++){
                if(n%i==0){
                    v.push_back(i); v.push_back(n/i);
                }
            }
            sort(v.begin(),v.end());
            // unordered_map<long long,long long>mp;
            // for(int i=0;i<v.size();i++){
            //     mp[v[i]]=i;
            // }
            // auto x= upper_bound(v.begin(),v.end(),k);
            int ind;
            for(int i=0;i<v.size();i++){
                if(v[i]>k){
                    ind=i; break;
                }
            }
            long long x=v[ind-1];
            cout<<n/x<<'\n';
        }
    }
}


