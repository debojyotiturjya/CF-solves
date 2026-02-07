#include <bits/stdc++.h>
using namespace std;
void vogoban_vorsha(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
void solve(){
    string s1,s2;
    getline(cin,s1);
    getline(cin,s2);

    map<char,int>m;

    for(int i=0;i<s1.size();i++){
        if(s1[i]==' ') continue;
        else m[s1[i]]++;
    }
    bool ck=true;

    for(int i=0;i<s2.size();i++){
        if(s2[i] == ' ') continue;
        if(m[s2[i]]>0){
            m[s2[i]]--;
        }
        else{
            ck=false; break;
        }
    }

    if(ck) cout<<"YES\n";
    else cout<<"NO\n";

}
int main(){
    vogoban_vorsha();
    solve();
}
