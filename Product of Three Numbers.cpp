#include <bits/stdc++.h>
using namespace std;
void vogoban_vorsha(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
int main(){
    vogoban_vorsha();
    long long t; cin>>t;
    while(t--){
        long long n,cpy; cin>>n; cpy=n;
        vector<long long>v;
        long long ans=1;



        long long a=-1,b=-1,c=-1;
        for(long long i=2;i*i<=n;i++){
            if(n%i==0){
                a=i;n/=i;
                break;
            }
        }
        for(long long i=2;i*i<n;i++){
            if(n%i==0 &&i!=a&& n/i!=a){
                b=i;n/=i;
                c=cpy/(a*b);
            }
        }
        if(a!=0&&b!=0&&c!=0 &&c>1) cout<<"YES\n"<<a<<' '<<b<<' '<<c<<'\n';
        else cout<<"NO\n";


    }
}


