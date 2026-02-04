#include <bits/stdc++.h>
using namespace std;
void vogoban_vorsha(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
void solve(){
    string s,c; cin>>s>>c;
    int wc=c.size();
    int lwc=0,rwc=0,dfct;
    string l="",r="";

    int bind=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='|'){
            bind=i;break;
        }
    }
    for(int i=0;i<bind;i++) l+=s[i];
    for(int i=bind+1;i<s.size();i++) r+=s[i];
    //cout<<l<<' '<<r;
    lwc=l.size(),rwc=r.size(),dfct=abs(lwc-rwc);

    if(dfct==0){
        if(wc%2==1) cout<<"Impossible\n";
        else{
            for(int i=0;i<wc/2;i++) l+=c[i];
            for(int i=wc/2;i<c.size();i++) r+=c[i];
            cout<<l<<'|'<<r;
        }
    }
    else if(dfct>wc) cout<<"Impossible\n";
    else{
        if(lwc<rwc){
            for(int i=0;i<dfct;i++) l+=c[i];
        }
        else if(lwc>rwc){
            for(int i=0;i<dfct;i++) r+=c[i];
        }
        reverse(c.begin(),c.end());
        wc-=dfct;
        if(wc==0) cout<<l<<'|'<<r;
        else{
            if(wc%2==1) cout<<"Impossible\n";
            else{
                for(int i=0;i<wc/2;i++) l+=c[i];
                for(int i=wc/2;i<wc;i++) r+=c[i];
                cout<<l<<'|'<<r;
            }
        }
    }



}
int main(){
    vogoban_vorsha();
    solve();
}
