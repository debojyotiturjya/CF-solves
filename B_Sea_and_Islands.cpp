#include<bits/stdc++.h>
using namespace std;
void vogoban_vorsha(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
void solve(){
    int n, k; cin>>n>>k;
    int mi=(n*n+1)/2;
    if(k>mi) {
        cout<<"NO"<<'\n';
        return;
    }
    cout<<"YES"<<'\n';
    vector<string>v(n);
    for(int i=0; i<n; i++) {
        v[i]=string(n, 'S');
    }
    int t=0;
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            if((i+j)%2==0 && t<k) {
                v[i][j]='L';
                t++;
            }
        }
    }
    for(int i=0; i<n; i++) cout<<v[i]<<'\n';
}
int main(){
    vogoban_vorsha();
    solve();
}