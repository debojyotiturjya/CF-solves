#include <bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;
void vogoban_vorsha(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
void solve(){
    string a, b; cin >> a >> b;

    int f = 0, s = 0, ans = 0, n = a.length();

    for(int i = 0; i < n; i++){
        if(a[i] != b[i]){
            if(a[i] == '4') f++;
            else s++;
        }
    }
   
    ans = max(f,s); 
   
    cout<< ans << '\n';
}
int main(){
    vogoban_vorsha();
    // int t; cin>>t; 
    // while(t--) 
    solve();
}
