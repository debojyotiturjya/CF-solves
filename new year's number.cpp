#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;cin>>t;
    while(t--){
        int n; cin>>n;
        if(n<2020) cout<<"NO\n";
        else{
            int x=n/2020, y=n%2020;

            if(x<y) cout<<"NO\n";
            else cout<<"YES\n";
        }

    }

}


