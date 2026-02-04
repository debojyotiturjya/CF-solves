#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,b,d; cin>>n>>b>>d;
    vector<int>v;
    for(int i=0;i<n;i++){
        int x; cin>>x;
        v.push_back(x);
    }

    long long cc=0,c=0;
    for(int i=0;i<v.size();i++){
        if(v[i]<=b) cc+=v[i];
        if(cc>d) {c++; cc=0;}
    }
    cout<<c<<'\n';
}


