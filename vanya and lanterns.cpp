#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m; cin>>n>>m;
    vector<int>v; v.push_back(0);

    for(int i=1;i<=n;i++){
        int x; cin>>x;
        v.push_back(x);
    }
    v.push_back(m);
    sort(v.begin(),v.end());

    int mx=0;
    for(int i=1;i<v.size()-1;i++){
        int d=abs(v[i]-v[i+1]);
        mx=max(mx,d);
    }
    double le= abs(v[0]-v[1]),re=abs(v[v.size()-1]-v[v.size()-2]);
    double f=mx/2.0;

    double ans= max({le,re,f});
    cout<<fixed<<setprecision(10)<<ans<<'\n';

}

