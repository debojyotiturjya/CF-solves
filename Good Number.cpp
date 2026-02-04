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
        vector<bool>ck(10,false);
        string s;cin>>s;
        for(char c:s){
            ck[c-'0']=true;
        }
        string sans="";
        for(int i=0;i<10;i++){
            if(ck[i]) sans+=to_string(i);
        }
        sort(sans.begin(),sans.end());
        int sum=0,csum=(k*(k+1))/2;
        if(sans.size()>=k+1){
            for(int i=0;i<k+1;i++){
                sum+=sans[i]-'0';
            }
        }
        if(sum==csum)ans++;
    }
    cout<<ans<<'\n';
}
int main(){
    vogoban_vorsha();
    solve();
}

