#include <bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;
void vogoban_vorsha(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
int n,k; 

int calc(int mid){
    int sum=0;
    int i=1;

    while(n/i>0){
        sum+=mid/i;
        i*=k;
    }
    return sum;
}

void solve(){
    cin>>n>>k;

    int l=1,r=n;
    int ans=0;

    while(l<=r){
        int mid=l+(r-l)/2;

        if(calc(mid)>=n){
            ans=mid;
            r=mid-1;
        }
        else l=mid+1;
    }

    cout<<ans<<'\n';
}
int main(){
    vogoban_vorsha();
    // int t; cin>>t; 
    // while(t--) 
        solve();
}
