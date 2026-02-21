#include<bits/stdc++.h>
#define ll long long
using namespace std;

void vogoban_vorsha(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

void solve(){
    int n; string s; cin>>n>>s;

    int o=0;
    for(char c:s) if(c=='1') o++;
    int z=n-o;

    if(o%2==0){
        cout<<o<<"\n";
        bool ck=true;
        for(int i=0;i<n;i++){
            if(s[i]=='1'){
                if(!ck) cout<<" ";
                cout<<i+1;
                ck=false;
            }
        }
        cout<<"\n";
    }
    else if(z%2==1){
        cout<<z<<"\n";
        bool ck=true;
        for(int i=0;i<n;i++){
            if(s[i]=='0'){
                if(!ck) cout<<" ";
                cout<<i+1;
                ck=false;
            }
        }
        cout<<"\n";
    }
    else cout<<-1<<"\n";
}

int main(){
    vogoban_vorsha();
    int t; cin>>t; while(t--) solve();
}