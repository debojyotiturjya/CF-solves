#include <bits/stdc++.h>
using namespace std;
void vogoban_vorsha(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
void solve(){
    int n;cin>>n;
    int mx=0,mn=0;
    for(int i=1;i<=n;i++){
        int k=i%7;
        if(k==1 ||k==2) mx++;
        if(k==6 ||k==0) mn++;
    }
    cout<<mn<<' '<<mx;
}
int main(){
    vogoban_vorsha();
    solve();
}

