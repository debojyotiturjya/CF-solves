#include<bits/stdc++.h>
using namespace std;

int main(){
    int note[]={100,20,10,5,1};

    int n; cin>>n;

    int i=0,c=0;

    while(n>0){
        int m= n/note[i%5];
        n=n%note[i%5];

        c+=m;
        m=0;
        i++;
    }
    cout<<c<<'\n';
}

