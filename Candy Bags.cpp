#include <bits/stdc++.h>
using namespace std;
void vogoban_vorsha(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
void solve(){
    int n;cin>>n;
    int nn=n*n,o=1;
    // vector<int>v; for(int i=1;i<=nn;i++) v.push_back(i);

    for(int i=0;i<n;i++){
        for(int j=0;j<n/2;j++){
            cout<<o<<' '<<nn<<' ';
            o++;nn--;
        }
        cout<<'\n';
    }
}
int main(){
    vogoban_vorsha();
    solve();
}

