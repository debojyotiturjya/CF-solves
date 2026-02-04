#include <bits/stdc++.h>
using namespace std;


int main(){
     int t; cin>>t;

     while(t--){
        int n,k; cin>>n>>k; vector<int>v;

        for(int i=0;i<n;i++){
            int x;cin>>x;
            v.push_back(x);
        }
        //v[v.size()-1]*=2;
        v.push_back(k); v.insert(v.begin(),0); int mx=INT_MIN,mn;

        for(int i=0;i<v.size()-1;i++){
            if(i==v.size()-2) mn= 2*abs(v[i]-v[i+1]);
            else mn= abs(v[i]-v[i+1]);
            mx=max(mx,mn);
        }
        cout<<mx<<'\n'; mx=0;
        //for(int x:v) cout<<x<<" ";

     }
}


