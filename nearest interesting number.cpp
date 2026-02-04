#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;

    for(int i=n;;i++){
        int c=0,tmp=i;
        while(tmp>0){
            int x=tmp%10; c+=x;
            tmp/=10;
        }
        if(c%4==0){cout<<i;break;}
    }
}

