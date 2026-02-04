#include <bits/stdc++.h>
using namespace std;
void vogoban_vorsha(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
void solve(){
    string s;cin>>s;
    int ind=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='^'){
            ind=i; break;
        }
    }
    long long l=0,r=0;
    bool ck=true;
    for(int i=0;i<s.size();i++){
        if(s[i]=='^'){
            ck=false;
        }
        if(ck && s[i]!='^'){
            if(s[i]>='0' &&s[i]<='9') l+=(s[i]-'0')*abs(ind-i);
        }
        else if(!ck && s[i]!='^'){
            if(s[i]>='0' &&s[i]<='9') r+=(s[i]-'0')*abs(ind-i);
        }
    }

    if(l==r)cout<<"balance\n";
    else if(l>r)cout<<"left\n";
    else cout<<"right\n";
}
int main(){
    vogoban_vorsha();
    solve();
}

