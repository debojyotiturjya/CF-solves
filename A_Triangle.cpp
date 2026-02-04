#include <bits/stdc++.h>
using namespace std;
void vogoban_vorsha(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
void solve(){
    vector<int>v(4);
    for(int i=0;i<4;i++) cin>>v[i];

    sort(v.begin(),v.end());

    bool t=false,s=false;
    for(int i=0;i<2;i++){
        int a=v[i],b=v[i+1],c=v[i+2];

        if(a+b>c) t=true;
        else if(a+b==c) s=true;
    }

    if(t) cout<<"TRIANGLE\n";
    else if(s) cout<<"SEGMENT\n";
    else cout<<"IMPOSSIBLE\n";
}
int main(){
    vogoban_vorsha();
    solve();
}
