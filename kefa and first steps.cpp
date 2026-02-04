#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    vector<int>p;

    for(int i=0;i<t;i++){
        int x; cin>>x;
        p.push_back(x);
    }

    int n,f=0,g=0;

    for(int i=0;i<t-1;i++){
        if(p[i]<=p[i+1]){
            f++;g=max(f,g);
        }
        else f=0;

        n=g;
    }
    if(p.size()==1) cout<<1<<'\n';
    else cout<<n+1<<'\n';
}

