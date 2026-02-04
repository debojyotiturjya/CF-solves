#include<bits/stdc++.h>
using namespace std;

bool cucky(int n){
     vector<int>s; bool cuck=true;
     while(n>0){
        int m=n%10;
        n/=10;
        s.push_back(m);
     }
     for(int c:s){
        if(c!=4 && c!=7) cuck= false;
     }



     return cuck;


}

int main(){
     int n; cin>>n;

     if(cucky(n)) cout<<"YES\n";
     else{
        for(int i=1;i<n;i++){
            if(cucky(i) && n%i==0){cout<<"YES\n"; return 0;}
        }
        cout<<"NO\n";
     }
}

