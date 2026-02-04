#include <bits/stdc++.h>
using namespace std;

void vogoban_vorsha(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

void solve(){
    int n,f;
    cin>>n>>f;
    long long tot=0;
    vector<long long>v;

    for(int i=0;i<n;i++){
        long long k,l;
        cin>>k>>l;

        long long x=min(k,l),y=min(2*k,l);
        tot+=x;
        v.push_back(y-x);
    }
    sort(v.rbegin(),v.rend());

    for(int i=0;i<f;i++) tot+=v[i];
    cout<<tot<<"\n";
}

int main(){
    vogoban_vorsha();
    solve();
}
