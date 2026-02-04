#include <bits/stdc++.h>
using namespace std;


int main(){
     int n,m; cin>>n>>m; vector<int>v;

     for(int i=0;i<m;i++){
        long long x;cin>>x;
        v.push_back(x);
     }

     long long c=v[0]-1;
     for(int i=0;i<m-1;i++){
        if(v[i]<=v[i+1]) c+=v[i+1]-v[i];
        if(v[i]>v[i+1]) c+=n-v[i]+v[i+1];
     }
     cout<<c;
}


