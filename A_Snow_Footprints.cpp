#include <bits/stdc++.h>
using namespace std;

void vogoban_vorsha(){
    ios::sync_with_stdio(0);
    cin.tie(0);
}

void solve(){
    int n;cin>>n;
    string s; cin>>s;
    
    int fr=0,lr=0;
    int fl=0,ll=0;
    
    for(int i=0;i<n;i++){
        if(s[i]=='R'){
            if(fr==0) fr=i;
            lr=i;
        }
        if(s[i]=='L'){
            if(fl==0) fl=i;
            ll=i;
        }
    }
    
    
    if(fl==0 && fr!=0){
        cout<<fr+1<<" "<<lr+2 <<'\n';
    }
    
    else if(fr==0 && fl!=0){
        cout<<ll+1<<" "<<fl<< '\n';
    }
   
    else if(fr!=0 && fl!=0){
        cout<<fr+1<<" "<<fl<<'\n';
    }
}

int main(){
    vogoban_vorsha(); 
    solve();
}