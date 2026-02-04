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
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int>v;
        for(int i=0;i<n;i++){
            int x; cin>>x;
            v.push_back(x);
        }
        if(n%2==0){
            cout<<2<<'\n'<<1<<' '<<n<<'\n'<<1<<' '<<n<<'\n';
        }
        else{
            cout<<4<<'\n'<<1<<' '<<n-1<<'\n'<<1<<' '<<n-1<<'\n'<<n-1<<' '<<n<<'\n'<<n-1<<' '<<n<<'\n';
        }
    }
}


