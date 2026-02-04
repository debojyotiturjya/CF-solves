#include <bits/stdc++.h>
using namespace std;
void vogoban_vorsha(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
void solve(){
    int n;cin>>n;
    int a[105][105];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    int ans=0;vector<int>v;
    for(int i=0;i<n;i++){
        int tmp=0;
        for(int j=0;j<n;j++){
            if(a[i][j]==1||a[i][j]==3)tmp++;
        }
        if(tmp==0){
            ans++; v.push_back(i+1);
        }
        tmp=0;
    }
    cout<<ans<<'\n';
    for(int x:v) cout<<x<<' ';
}
int main(){
    vogoban_vorsha();
    solve();
}

