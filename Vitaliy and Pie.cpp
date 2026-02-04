#include <bits/stdc++.h>
using namespace std;
void vogoban_vorsha(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
void solve(){
    int n; cin>>n;
    string s;cin>>s;
    vector<int>v(26,0);

    int ans=0;
    for(int i=0;i<s.size();i++){
        if(s[i]>='a'&&s[i]<='z') v[s[i]-'a']++;
        else{
            if(v[s[i]-'A']!=0)v[s[i]-'A']--;
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
