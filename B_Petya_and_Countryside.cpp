#include <bits/stdc++.h>
using namespace std;
void vogoban_vorsha(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
void solve(){
    int n;cin>>n;
    vector<int>v(n);

    for(int i=0;i<n;i++) cin>>v[i];

    int ans=1;

    for(int i=0;i<n;i++){
        int sum=1;
        int j=i,k=i;
        while(j>0){
            if(v[j]<v[j-1]) break;
            else sum++;
            j--;
        }
        while(k<n-1){
            if(v[k]<v[k+1]) break;
            else sum++;
            k++;
        }
        ans=max(sum,ans);
    }

    cout<<ans<<'\n';
}
int main(){
    vogoban_vorsha();
    solve();
}
