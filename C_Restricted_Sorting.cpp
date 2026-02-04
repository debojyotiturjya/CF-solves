//PARSI NA

#include <bits/stdc++.h>
using namespace std;

void vogoban_vorsha(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

void solve(){
    int n; cin>>n;
    vector<long long>v(n),vs;

    for(int i=0;i<n;i++){
        cin>>v[i];
        vs.push_back(v[i]);
    }
    sort(vs.begin(),vs.end());
    long long k=-1;

    for(int i=0;i<n;i++){
        if(v[i]!=vs[i]){
            long long x=abs(v[i]-vs[i]);
            k=max(k,x);
        }
    }
    cout<<k<<'\n';
}

int main(){
    vogoban_vorsha();
    int t; cin>>t;
    while(t--) solve();
}
