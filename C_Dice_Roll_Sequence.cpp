#include <bits/stdc++.h>
using namespace std;

void vogoban_vorsha(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

const int INF = 1e9;

void solve(){
    int n;cin >> n;

    vector<int>v(n+1);
    for(int i=1;i<=n;i++) cin>>v[i];

    vector<int>pre(7),cur(7);

    for(int i=1;i<=6;i++){
        pre[i] =(v[1]!=i);
    }
    for(int i=2;i<=n;i++){
        for(int j=1;j<=6;j++){
            cur[j]=INF;
            for(int k=1;k<=6;k++)
                if(j!=k && j+k!=7)
                    cur[j]=min(cur[j],pre[k]+(v[i]!=j));
        }
        pre=cur;
    }

    int ans=INF;
    for(int i=1;i<=6;i++) ans=min(ans,pre[i]);

    cout<<ans<<"\n";
}

int main(){
    vogoban_vorsha();
    int t; cin>>t; while(t--) solve();
}
