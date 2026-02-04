#include <bits/stdc++.h>
using namespace std;

void vogoban_vorsha(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

int main(){
    vogoban_vorsha();
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        char c;cin>>c;
        string s; cin>>s;
        string lund=s+s;
        int mg=-1,ans=0;

        for(int i=2*n-1;i>=0;i--){
            if(lund[i]=='g') mg=i;
            if(lund[i]==c && !(i>n) &&mg!=-1) ans=max(ans,mg-i);
        }
        cout<<ans<<'\n';

    }
}


