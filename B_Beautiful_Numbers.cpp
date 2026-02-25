#include <bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;
void vogoban_vorsha(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
void solve(){
    string s; cin>>s;
    int sum=0;

    for(int i=0;i<s.size();i++) sum+=s[i]-'0';

    if(sum<=9){
        cout<<0<<'\n';
        return;
    }

    int r=sum-9;
    vector<int>v;

    for(int i=0;i<s.size();i++){
        int d=s[i]-'0';
        if(i==0 && s.size()>1) v.push_back(d-1);
        else v.push_back(d);
    }

    sort(v.rbegin(),v.rend());

    int cur=0,ans=0;

    for(int i=0;i<v.size();i++){
        cur+=v[i];
        ans++;
        if(cur>=r) break;
    }
    cout<<ans<<'\n';
}
int main(){
    vogoban_vorsha();
    int t; cin>>t; while(t--) solve();
}
