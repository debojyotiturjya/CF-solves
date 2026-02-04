#include <bits/stdc++.h>
using namespace std;
void vogoban_vorsha(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
void solve(){
    int t;cin>>t;
    vector<int>v,vv;
    int tot=0;
    bool ck=true;
    for(int i=0;i<t;i++){
        int x;cin>>x;
        if(x%2==0) cout<<x/2<<'\n';
        else{
            if(ck) {cout<<(x+1)/2<<'\n'; ck=!ck;}
            else {cout<<(x-1)/2<<'\n';ck=!ck;}

        }
    }


}
int main(){
    vogoban_vorsha();
    solve();
}

