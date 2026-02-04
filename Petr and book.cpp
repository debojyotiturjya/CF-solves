#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    vector<int>v(7);
    for(int i=0;i<7;i++) cin>>v[i];

    int i=0,sum=0;
    while(sum<n){
        int ind=i%7;
        sum+=v[ind];
        i++;
    }
    if(i%7==0) cout<<7;
    else cout<<(i%7);
}


