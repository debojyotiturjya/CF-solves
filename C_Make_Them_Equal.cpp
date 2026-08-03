#include <bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;
void vogoban_vorsha(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
void solve(){
    int n; char c; string s; 
    cin >> n >> c >> s;

   int cnt = count(s.begin(), s.end() ,c);
   if(cnt == n){
    cout << 0 << '\n';
    return;
   }

   bool ck= true;
   for(int i = 0; i < n; i++){
    ck = true;
    for(int j = i; j < n; j+= (i + 1)){
        if(s[j] != c){
            ck = false;
        }
    }
    if(ck){
            cout << 1 << '\n' << i+1 << '\n';
            return;
        }
   }
  
    cout << 2 << '\n' << n << ' ' << n-1 << '\n';

}
int main(){
    vogoban_vorsha();
    int t; cin>>t; 
    while(t--) 
    solve();
}
