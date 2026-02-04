#include<bits/stdc++.h>
using namespace std;


int main(){
    int n,m;cin>>n>>m;

    if(m>n) cout<<-1;
    else{
        int st;
        if(n%2==0) st=n/2;
        else st=(n/2)+(n%2);

        while(st%m!=0){
            st++;
        }
        cout<<st<<'\n';
    }


}
