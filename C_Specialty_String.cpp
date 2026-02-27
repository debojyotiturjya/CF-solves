#include <bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;
void vogoban_vorsha(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
void solve(){
    int n; string s; cin>>n>>s;
    
    stack<char>st;

    for(char c:s){
        if(!st.empty() && c==st.top()) st.pop();
        else st.push(c);
    }

    if(st.empty()) cout<<"YES\n";
    else cout<<"NO\n";


}
int main(){
    vogoban_vorsha();
    int t; cin>>t; 
    while(t--) 
        solve();
}
