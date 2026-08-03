#include<bits/stdc++.h>
#define ll long long
using namespace std;

void vogoban_vorsha(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

void solve(){
    long long n;
    cin>>n;

    if(n==10){
        cout<<-1<<"\n";
        return;
    }

    long long r=n%12;
    long long a;

    if(r<=9) a=r;
    else if(r==11) a=11;
    else a=22; 

    cout<<a<<" "<<n-a<<"\n";
}

int main(){
    vogoban_vorsha();
    int t; cin>>t; 
    while(t--) 
    solve();
}