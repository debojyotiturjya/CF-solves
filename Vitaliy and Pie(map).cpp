#include <bits/stdc++.h>
using namespace std;
void vogoban_vorsha(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
void solve(){
    int n; cin>>n;
    string s;cin>>s;
    map<int,int>m;

    int ans=0;
    for(int i=0;i<s.size();i++){
        if(s[i]>='a'&&s[i]<='z') m[s[i]-'a']++;
        else{
            if(m[s[i]-'A']!=0)m[s[i]-'A']--;
            else{
                ans++;
            }
        }
    }
    cout<<ans;
}
int main(){
    vogoban_vorsha();
    solve();
}
