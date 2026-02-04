#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++) cin>>v[i];

    int c1=0;
    for(int i=0;i<n;i++){
        if(v[i]==1) c1++;
    }

    if(c1==n){
        cout<<n-1<<'\n';
    }

    else if(n==1 && c1==1) cout<<0<<'\n';
    else{
        int kadane=0,c=0;
        for(int i=0;i<n;i++){
            if(v[i]==1){
                c--;
                kadane=max(kadane,c);
                if(c<0)c=0;
            }
            else{
                c++;
                kadane=max(kadane,c);
            }
        }
        cout<<kadane+c1<<'\n';
    }
}

