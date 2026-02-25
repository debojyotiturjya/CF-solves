#include <bits/stdc++.h>
#define ll long long
using namespace std;

void vogoban_vorsha(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

void solve(){
    int n,m;
    cin>>n>>m;
    int nm=n+m;

    vector<int>v(nm+1,0),vv(nm+1,0);
    for(int i=0;i<n;i++){
        int x; cin>>x;
        v[x]++;
    }
    for(int i=0;i<m;i++){
        int x; cin>>x;
        vv[x]++;
    }

    vector<char>div(nm+1,0);
    for(int i=1;i<=nm;i++){
        if(v[i]){
            for(int j=i;j<=nm;j+=i) div[j]=1;
        }
    }

    ll lcm=1;
    bool boro=false;
    for(int i=1;i<=nm;i++){
        if(v[i]){
            ll g = __gcd(lcm,1LL*i);
            if(lcm>nm/(i/g)){
                boro=true;
                break;
            }
            lcm =lcm*(i/g);
        }
    }

    ll a=0,b=0;
    if(!boro){
        for(ll i=lcm;i<=nm;i+=lcm) a+=vv[i];
    }

    for(int i=1;i<=nm;i++){
        if(!div[i]) b+=vv[i];
    }

    ll d=m-a-b;

    if(a>b) cout<<"Alice\n";
    else if(a<b) cout<<"Bob\n";
    else{
        if(d%2==0) cout<<"Bob\n";
        else cout<<"Alice\n";
    }
}

int main(){
    vogoban_vorsha();
    int t; cin>>t; while(t--) solve();
}