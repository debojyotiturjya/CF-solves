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

    int af = 0, as = 0, bf =0 , bs = 0, ans = 0, n = a.length();

    for(int i = 0; i < n; i++){
        if(a[i] == '4') af++;
        else if(a[i] == '7') as++;
    }
    
    for(int i = 0; i < n; i++){
        if(b[i] == '4') bf++;
        else if(b[i] == '7') bs++;
    }
    //cerr<<af<<' '<<as<<'\n'<<bf<<' '<<bs;
    for(int i = 0; i < n; i++){
        if(a[i] == '4' && b[i] == '4'){
            af--; bf--;
        }
        if(a[i] == '7' && b[i] == '7'){
            as--; bs--;
        }
    }
    ans = max(max(as, af), max(bf, bs)); 
   
    cout<< ans << '\n';
}
int main(){
    vogoban_vorsha();
    // int t; cin>>t; 
    // while(t--) 
    solve();
}
