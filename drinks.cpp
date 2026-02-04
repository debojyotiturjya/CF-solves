#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;cin>>t;
    double q,s=0.0;
    for(int i=0;i<t;i++){
        cin>>q;
        s+=q;
    }
    double a=s/t;
    cout<<fixed<<setprecision(12)<<a<<'\n';
}



