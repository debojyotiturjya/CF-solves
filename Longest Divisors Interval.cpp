#include <bits/stdc++.h>
using namespace std;
void vogoban_vorsha(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
void solve(){

}
int main(){
    vogoban_vorsha();
    int t;cin>>t;
    while(t--){
        long long n; cin>>n;

        int i=1;
        while(n%i==0){
            i++;
        }
        cout<<i-1<<'\n';
    }
}


