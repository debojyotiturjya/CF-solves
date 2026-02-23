#include<bits/stdc++.h>
#define ll long long
using namespace std;

void vogoban_vorsha(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

const int N = 1e6 + 5;
vector<int> spf(N);

void sieve(){
    for(int i=0;i<N;i++) spf[i]=i; 

    for(int i=2;i+i<N;i++){
        if(spf[i]==i){ 
            for(int j=i+i;j<N;j+=i){
                if(spf[j]==j){ 
                    spf[j]=i; 
                }
            }
        }    
    }
}

vector<int>fct(int n){ 
    vector<int>v;

    for(int i=2;i<=n;i++){
        if(spf[i]==i) v.push_back(i);
    }
    return v;
}
void solve(){
    int n; cin>>n;
    vector<int>v=fct(n);
    vector<ll>ans;

    //for(int x:v) cout<<x<<' ';
    for(int i=0;i<v.size();i++){
        int x=v[i];
        while(x<=n){
            ans.push_back(x);
            x*=v[i];
        }
    }

    cout<<ans.size()<<'\n';
    for(int x:ans) cout<<x<<' ';

}

int main(){
    vogoban_vorsha();
    sieve();
    solve();
}