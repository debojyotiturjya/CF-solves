#include <bits/stdc++.h>
using namespace std;
void vogoban_vorsha(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
void solve(){
    int n;
    cin>>n;
    vector<int>p(n);
    for(int i=0;i<n;i++) cin>>p[i];
    for(int i=0;i<n;i++){
        int mx=p[i],pos=i;
        for(int j=i+1;j<n;j++){
            if(p[j]>mx) {mx=p[j];pos=j;}
        }    
        if(mx>p[i]) reverse(p.begin()+i,p.begin()+pos+1);break;
    }
    for(int i=0;i<n;i++) cout<<p[i]<<" ";
    cout<<"\n";
}
int main(){
    vogoban_vorsha();
    int t;cin>>t;while(t--) solve();
}
