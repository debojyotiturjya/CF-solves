#include<bits/stdc++.h>
#define ll long long
using namespace std;

void vogoban_vorsha(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
// ll N=1e9+2;
// vector<int>sieve(N,true); takes 4gb space lol

bool prime(ll n){
    if(n<2) return false;
    if(n==2) return true;
    else if(n%2==0) return false;
    else{
        for(int i=3;i*i<=n;i+=2){
            if(n%i==0) return false;
        }
    }
    return true;
}


void solve(){
    int n; cin>>n;

    if(prime(n)){
        cout<<1<<'\n'<<n;
        return;
    }

    if(n%2==0){
        cout<<2<<'\n';
        for(int i=2;i<=n;i++){
            if(prime(i) && prime(n-i)){
                cout<<i<<" "<<n-i;
                return;
            }
        }
    }
    else{
        cout<<3<<'\n';
        cout<<3<<" ";
        n-=3;
        for(int i=2;i<=n;i++){
            if(prime(i) && prime(n-i)){
                cout<<i<<" "<<n-i;
                return;
            }
        }
    }
}

int main(){
    vogoban_vorsha();
    solve();
}