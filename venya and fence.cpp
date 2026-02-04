#include<bits/stdc++.h>

using namespace std ;

int main(){
    int t,h,w=0; cin>>t>>h;

    while(t--){
        int m; cin>>m;
        if(m<=h) w+=1;
        else w+=2;
    }
    cout<<w<<'\n';
}

