#include <bits/stdc++.h>
using namespace std;
void vogoban_vorsha(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
void solve(){
    int n,m; vector<int>a,b;
    cin>>n; for(int i=0;i<n;i++){int x;cin>>x;a.push_back(x);}
    cin>>m; for(int i=0;i<m;i++){int x;cin>>x;b.push_back(x);}

    sort(a.begin(),a.end());sort(b.begin(),b.end());
    int mx=INT_MIN,ans=0;

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(b[j]%a[i]==0){
                if(b[j]/a[i]>mx){
                    mx=b[j]/a[i]; ans=1;
                }
                else if(b[j]/a[i]==mx) ans++;
            }
        }
    }
    cout<<ans;
}
int main(){
    vogoban_vorsha();
    solve();
}
