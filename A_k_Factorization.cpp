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
    for(int i=0;i<N;i++) spf[i]=i; //assuming every number is its own smallest factor

    for(int i=2;i+i<N;i++){
        if(spf[i]==i){ //if smth is his own smallest factor== prime, cz er ager konokisu diye eita divisible na
            for(int j=i+i;j<N;j+=i){
                if(spf[j]==j){ //this ensures there's no overwriting. cz already jara divisible onno primes diye tader spf[j]=i hoye gese. eta shudhu spf[j]=j tader kei update korbe
                    spf[j]=i; //divisible by i so update them 
                }
            }
        }    
    }
}

vector<int>fct(int n){
    int nn=n;
    vector<int>v;

    while(nn>1){
        v.push_back(spf[nn]);
        nn/=spf[nn];
    }
    return v;
}

void solve(){
    int n,k; cin>>n>>k;

    vector<int>v=fct(n);

    if(v.size()<k) cout<<-1<<'\n';
    else{
        for(int i=0;i<k-1;i++) cout<<v[i]<<' ';

        ll rest=1;
        for(int i=k-1;i<v.size();i++) rest*=1LL*v[i];
        cout<<rest<<'\n';

    }
}

int main(){
    vogoban_vorsha();
    sieve();
    solve();
}