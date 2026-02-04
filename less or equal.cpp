#include<bits/stdc++.h>
using namespace std;
int main() {
    int n,k; cin>>n>>k;
    vector<int>v;
    for(int i=0;i<n;i++){
        int x; cin>>x; v.push_back(x);
    }
    sort(v.begin(),v.end());
    if(k==0){
        if(v[0]>1) cout<<v[0]-1<<'\n';
        else cout<<-1<<'\n';
    }
    else if(v[k-1]!=v[k]) cout<<v[k-1]<<'\n';
    else cout<<-1<<'\n';
}


