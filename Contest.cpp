#include <bits/stdc++.h>
using namespace std;
void vogoban_vorsha(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
void solve(){
    int a,b,c,d;cin>>a>>b>>c>>d;
    int m1=(3*a)/10,m2=a-((a/250)*c),m=max(m1,m2);
    int v1=(3*b)/10,v2=b-((b/250)*d),v=max(v1,v2);
    if(v>m) cout<<"Vasya\n";
    else if(m>v) cout<<"Misha\n";
    else cout<<"Tie\n";
}
int main(){
    vogoban_vorsha();
    solve();
}

