#include <bits/stdc++.h>
using namespace std;

void vogoban_vorsha(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

void solve(){
    int x,y;
    cin >>x>>y;

    long long ans=0;
    for(int i=1;i<=x;i++){
        ans+=((i%5)+y)/5;
    }
    cout<<ans<<'\n';
}

int main(){
    vogoban_vorsha();
    solve();
}

