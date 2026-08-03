#include <bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;
void vogoban_vorsha(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

const int N = 1e5 + 5;
vector<bool>pck(N,true);
vector<int>primes;

void sieve(){
    pck[0]=false; 
    pck[1]=false;

    for(int i=2;i*i<N;i++){
        if(pck[i]){
            for(int j=i*i;j<N;j+=i){
                pck[j]=false;
            }
        }
    }

    for(int i=2;i<N;i++){
        if(pck[i]) primes.pb(i);
    }
}

void solve(){
    int n; cin>>n;

    int ans=0;
    for(int z=0;z<primes.size();z++){
        int f=primes[z];
        if(f>=n && !pck[f-(n-1)]){
            ans=f-(n-1); break;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j) cout<<ans<<' ';
            else cout<<1<<' ';
        }
        cout<<'\n';
    }
}
int main(){
    vogoban_vorsha();
    sieve();
    int t; cin>>t; 
    while(t--) 
    solve();
}
