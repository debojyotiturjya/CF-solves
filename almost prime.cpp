#include <bits/stdc++.h>
using namespace std;

void sieve(int n){
    int s=3001;
    vector<int>v(s,0);

    for(int i=2;i<s;i++){
        if(v[i]==0){
            for(int j=i;j<s;j+=i){
                v[j]++;
            }
        }
    }
    int c=0;

    for(int i=0;i<=n;i++){
        if(v[i]==2)c++;
    }
    cout<<c<<'\n';

}

int main(){
    int n; cin>>n;
    sieve(n);

}


