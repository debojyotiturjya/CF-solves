#include<bits/stdc++.h>
using namespace std;

int main(){
    string p; cin>>p;

    int c=0;
    for (int i=0;i<p.size();i++){
        if(p[i]=='H' ||p[i]=='Q'||p[i]=='9') c++;
    }
    if(c>0) cout<<"YES\n";
    else cout<<"NO\n";
}



