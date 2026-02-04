#include <bits/stdc++.h>
using namespace std;
void vogoban_vorsha(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
void solve(){
    int k;cin>>k;
    char a[4][4];
    map<int,int>m;
    for(int i=0;i<4*4;i++){
        char x;cin>>x;
        if(x!='.'){
            int z=x-'0'; m[z]++;
        }
    }
    bool ck=true;
    for(auto it:m){
        if(it.second>2*k){
            ck=false; break;
        }
    }
    if(ck) cout<<"YES\n";
    else cout<<"NO\n";

}
int main(){
    vogoban_vorsha();
    solve();
}

