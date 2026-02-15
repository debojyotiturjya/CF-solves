#include <bits/stdc++.h>
using namespace std;
void vogoban_vorsha(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

void solve(){
    string s; cin>>s;
    int b=0,ss=0,c=0;
    long long nb,ns,nc; cin>>nb>>ns>>nc;
    long long csb,css,csc,tot=0; cin>>csb>>css>>csc;
    long long r; cin>>r;

    for(int i=0;i<s.size();i++){
        if(s[i]=='B') b++;
        else if(s[i]=='S') ss++;
        else c++;
    }

    long long l=0,h=1e15,mid;
    long long ans=0;
    while(l<=h){
        mid=l+(h-l)/2;
        long long mb=max(0LL,(mid*b)-nb)*csb;
        long long ms=max(0LL,(mid*ss)-ns)*css;
        long long mc=max(0LL,(mid*c)-nc)*csc;

        tot=mb+mc+ms;

        if(tot<=r){
            l=mid+1;
            ans=mid;
        }
        else h=mid-1;
    }

    cout<<ans<<'\n';

}
int main(){
    vogoban_vorsha();
    solve();
}
