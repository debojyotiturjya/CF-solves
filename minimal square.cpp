#include <bits/stdc++.h>
using namespace std;

int main(){
     int t; cin>>t;

     while(t--){
        int a,b; cin>>a>>b;

        if(a!=b){
            if(a>b){
                int c=2*b;
                if(c>a) cout<<c*c<<'\n';
                else cout<<a*a<<'\n';
            }
            else if(b>a){
                int c=2*a;
                if(c>b) cout<<c*c<<'\n';
                else cout<<b*b<<'\n';
            }
        }
        else{
            cout<<pow((2*a),2)<<'\n';
        }
     }
}
