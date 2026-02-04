#include <bits/stdc++.h>
using namespace std;
void vogoban_vorsha(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
void solve(){
    int n,k;cin>>n>>k;
    int t=n,ans=0;

    while(t--){
        string s;cin>>s;
        set<char>st;
        for(char c:s) st.insert(c);
        string sans="";
        for(char c:st) sans+=c;
        sort(sans.begin(),sans.end());
        int sum=0,csum=(k*(k+1))/2;
        if(sans.size()>=k+1){
            for(int i=0;i<k+1;i++) sum+=sans[i]-'0';
        }
        if(sum==csum) ans++;
        //cout<<sans;
    }
    cout<<ans<<'\n';
}
int main(){
    vogoban_vorsha();
    solve();
}

