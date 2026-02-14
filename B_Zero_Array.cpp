#include <bits/stdc++.h>
using namespace std;
void vogoban_vorsha(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
void solve(){
    int n; cin>>n;
    vector<int>v;

    long long sum=0;
    for(int i=0;i<n;i++){
        int x; cin>>x;
        v.push_back(x);
        sum+=x;
    }
    sort(v.begin(),v.end());
    long long df=sum-v[n-1];

    if(sum%2==0 && df>=v[n-1]) cout<<"YES\n";
    else cout<<"NO\n";
}
int main(){
    vogoban_vorsha();
    solve();
}
