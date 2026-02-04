#include <bits/stdc++.h>
using namespace std;
void vogoban_vorsha(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
void solve(){
    int n;cin>>n;
    string s;cin>>s;
    int x=0,X=0;
    for(int i=0;i<n;i++){
        if(s[i]=='x') x++;
        else X++;
    }
    int chex=min(X,x);
    int ans=(n/2)-chex,tmp=ans;
    if(ans==0){
        cout<<ans<<'\n'<<s<<'\n';
    }
    else{
        int i=0;
        if(chex==x){
            while(tmp!=0){
                if(s[i]=='X') {s[i]='x';tmp--;}
                i++;
            }
        }
        if(chex==X){
            while(tmp!=0){
                if(s[i]=='x') {s[i]='X';tmp--;}
                i++;
            }

        }
        cout<<ans<<'\n'<<s<<'\n';
    }

}
int main(){
    vogoban_vorsha();
    solve();
}

