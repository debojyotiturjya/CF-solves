#include <bits/stdc++.h>
using namespace std;
void vogoban_vorsha(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
void solve(){
    int n,k; cin>>n>>k;
    vector<int>v(n); 
    for(int i=0;i<n;i++) cin>>v[i];

    int nc=0;
    for(int i=0;i<n;i++){
        if(v[i]<0){
            nc++;
            if(nc<=k) v[i]*=-1;
        }
    }
    k-=nc;
    sort(v.begin(),v.end());
    long long sum=0;
    if(k<0){
        for(int i:v) sum+=i;
        cout<<sum<<'\n';
    }
    else{
        if(k%2==1){
            v[0]*=-1;
            for(int i:v) sum+=i;
            cout<<sum<<'\n';
        }
        else{
            for(int i:v) sum+=i;
            cout<<sum<<'\n';
        }
    }
}
int main(){
    vogoban_vorsha();
    solve();
}
