#include <bits/stdc++.h>
using namespace std;
void vogoban_vorsha(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

long long dsum(long long n){
    long long sum=0;
    while(n){
        sum+=n%10;
        n/=10;
    }
    return sum;
}

void solve(){
    long long x; cin>>x;
    int c=0;

    for(int i=x+1;i<=x+90;i++){
        if(i-dsum(i)==x) c++;
    }

    cout<<c<<'\n';
    
}
int main(){
    vogoban_vorsha();
    int t; cin>>t; while(t--) solve();
}
