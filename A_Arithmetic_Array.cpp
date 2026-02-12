#include<bits/stdc++.h>
using namespace std;
void vogoban_vorsha(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
void solve(){
        int n; cin>>n;
        long long sum=0;
        for(int i=0; i<n; i++) {
            int x;
            cin>>x;
            sum+=x-1;
        }
        if(sum==0) cout<<0<<endl;
        else if(sum<0) cout<<1<<endl;
        else cout<<sum<<endl;
    
}
int main(){
    vogoban_vorsha();
    int t; cin>>t; while(t--) solve();
}
