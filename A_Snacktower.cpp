#include <bits/stdc++.h>
using namespace std;
void vogoban_vorsha(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
void solve(){
    int n; cin>>n;
    vector<int>v(n+1,false);

    int e=n;
    for(int i=0;i<n;i++){
        int x; cin>>x;
        v[x]=true;

        if(x==e){
            while(v[e]){
                cout<<e<<' ';
                e--;
            }
            cout<<'\n';
        }
        else cout<<'\n';
    }

}
int main(){
    vogoban_vorsha();
    solve();
}
