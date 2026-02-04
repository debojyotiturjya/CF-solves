#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    vector<long long>v;

    for(int i=0;i<n;i++){
        long long x; cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    long long l=v[0], h=v[n-1];
    //cout<<l<<' '<<h;
    long long cl=0,ch=0;

    for(int i=0;i<n;i++){
        if(v[i]==l) cl++;
        if(v[i]==h) ch++;
    }
    if(l==h){
        long long x=1LL *n*(n-1)/2; //1LL na dile overflow oijay
        cout<<h-l<<" "<<x<<'\n';
    }
    else cout<<h-l<<" "<<cl*ch<<'\n';


}

