#include <bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;
void vogoban_vorsha(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
int n,k;
int N=2e5+10;
vector<int>v(N);

bool ck(int mid){
    unordered_set<int>us;
    int a=0;
    for(int i=0;i<n;i++){
        if(v[i]<mid){
            us.insert(v[i]);
            if(us.size()==mid){
                us.clear(); a++;
            }
        }
    }
    return a>=k;

}

void solve(){
    cin>>n>>k;

    for(int i=0;i<n;i++) cin>>v[i];

    ll l=1,r=n;
    int ans=0;
    while(l<=r){
        int mid=l+(r-l)/2;

        if(ck(mid)){
            ans=max(ans,mid);
            l=mid+1;
        }
        else r=mid-1;
    }
    cout<<ans<<'\n';
}
int main(){
    vogoban_vorsha();
    int t; cin>>t; 
    while(t--) 
    solve();
}
