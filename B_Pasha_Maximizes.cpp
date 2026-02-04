#include <bits/stdc++.h>
using namespace std;
void vogoban_vorsha(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
void solve(){
    string n;int k; cin>>n>>k;

    for(int i=0;i<n.size();i++){
        int idx=i;
        for(int j=i+1;j<n.size();j++){
            if(n[idx]<n[j] && j-i<=k) idx=j;
        }

        for(int j=idx;j>i;j--) swap(n[j],n[j-1]);

        k-=idx-i;
        if(k<=0) break;
    }
    cout<<n<<'\n';
}
int main(){
    vogoban_vorsha();
    solve();
}
