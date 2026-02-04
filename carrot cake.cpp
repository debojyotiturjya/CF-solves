#include <bits/stdc++.h>
using namespace std;
void vogoban_vorsha(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
void solve(){
    int n,t,k,d;cin>>n>>t>>k>>d;
    int f=((n+k-1)/k)*t;
    if(f==0) f==1;
    if(k>n && t<=d ||f==0) cout<<"NO\n";
    else{
        bool stop=false;
        int i=1,so=0;
        while(i<=f){
            if(i%t==0) n-=k;
            if(i>d) {
                so++;
                if(so%t==0) n-=k;
            }
            if(n<=0) break;
            i++;
        }
        if(i<f) cout<<"YES\n";
        else cout<<"NO\n";
    }

}
int main(){
    vogoban_vorsha();
    solve();

}

