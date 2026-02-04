#include <bits/stdc++.h>
using namespace std;


int main(){
     int s=pow(10,6);
     vector<bool> prime(s+1,true);
     prime[0]=prime[1]=false;

     for(int i=2;i*i<=s;i++){
        if(prime[i]){
            for (int j=i*i;j<=s;j+=i){
                prime[j]=false;
            }
        }
     }

     int t;cin>>t;
     while(t--){
        unsigned long long n;cin>>n;
        unsigned long long f=sqrt(n);
        if(f*f==n && prime[f]) cout<<"YES\n";
        else cout<<"NO\n";
     }
}

