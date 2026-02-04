#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int a,b,c; cin>>a>>b>>c;
        double na= (2*b-c)/a, nb=(c+a)/(2*b),nc=(2*b-a)/c;

        if((2*b-c)%a==0 && (2*b-c)/a>0){
            cout<<"YES\n";
        }
        else if((c+a)%(2*b)==0 &&(c+a)/(2*b)>0 ){
            cout<<"YES\n";
        }
        else if((2*b-a)%c==0 &&(2*b-a)/c>0){
            cout<<"YES\n";
        }
        else cout<<"NO\n";
    }
}

