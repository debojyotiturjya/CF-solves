#include <bits/stdc++.h>
using namespace std;

int main(){
     int t; cin>>t;

     for(int i=1;i<=t;i++){
        int p;cin>>p;
        for(int j=0;j<10;j++){
            if((p+1)%3==0 || (p-1)%3==0){
                if(j%2==0) cout<<"First\n";
                else cout<<"Second\n";
                break;
            }
            else{
                if ((p+1)%3!=0) p+=1;
                if ((p-1)%3!=0) p-=1;
            }
        }
     }
}

