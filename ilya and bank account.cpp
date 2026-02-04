#include<bits/stdc++.h>
using namespace std;


int main(){
    int n;cin>>n;

    if(n<0){
        int nl=n/10,nld=n%10,nsl=(nl/10)*10+nld;
        cout<<max(nl,nsl)<<'\n';
    }
    else cout<<n<<'\n';
}


