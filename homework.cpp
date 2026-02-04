#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;cin>>t;

    while(t--){
        int n;cin>>n;
        string ishting;cin>>ishting;
        int m; cin>>m;
        string dishting;cin>>dishting;
        string filiar; cin>>filiar;

        for(int i=0;i<m;i++){
            if(filiar[i]=='D') ishting=ishting+dishting[i];
            else ishting=dishting[i]+ishting;
        }
        cout<<ishting<<'\n';
    }

}
