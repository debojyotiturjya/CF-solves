#include<bits/stdc++.h>
using namespace std;

int main(){
     long long n,m; cin>>n>>m;

     if(n%2==0){
        if((n/2)>=m){
            long long x=abs((n/2)-m);
            long long l=(n/2)-x;
            long long z=l*2-1; cout<<z;
        }
        if((n/2)<m){
            long long x=abs((n/2)-m);
            long long z=x*2; cout<<z;
        }
     }

     else{
        long long q=(n/2)+1;

        if(q>=m){
            long long x=abs(q-m);
            long long l=q-x;
            long long z=l*2-1; cout<<z;
        }
        if(q<m){
            long long x=abs((n/2)-m)-1;
            long long z=x*2; cout<<z;
        }
     }
}
/*
vector<long long>tanki;

     for(long long i=1;i<=n;i++){
        if(i%2!=0) tanki.push_back(i);
     }
     for(long long i=1;i<=n;i++){
        if(i%2==0) tanki.push_back(i);
     }

     cout<<tanki[m-1];
*/

