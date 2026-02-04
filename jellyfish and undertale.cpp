#include <bits/stdc++.h>
using namespace std;

int main(){
    long long t; cin>>t;
    while(t--){
        long long a,b,n; cin>>a>>b>>n;
        vector<long long>v;
        for(long long i=0;i<n; i++){
            long long x; cin>>x;
            v.push_back(x);
        }
        sort(v.begin(),v.end());

        long long i=0,ans=b;

        for(i;i<v.size();i++){
            long long temp=min(a-1,v[i]);
            ans+=temp;
        }
        cout<<ans<<'\n';
    }
}


