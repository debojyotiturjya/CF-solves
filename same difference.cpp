#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;cin>>t;

    while(t--){
        int n;cin>>n;
        vector<int>v;
        for(int i=0;i<n;i++){
            unsigned long long x;cin>>x;
            v.push_back(x);
        }
        vector<int>vv;
        for(unsigned long long i=0;i<n;i++){
            vv.push_back((v[i]-i));
        }
        //for(int x:vv) cout<<x<<' ';
        map<unsigned long long,unsigned long long>fq;
        unsigned long long ans=0;

        for(int i=0;i<n;i++){
            fq[vv[i]]++;
            ans+=fq[vv[i]]-1;
        }
        cout<<ans<<'\n';

    }
}


