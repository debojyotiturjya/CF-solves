#include<bits/stdc++.h>
using namespace std;

int main(){
     int t; cin>>t;

     vector<int>p; int tf=0,f=0; bool bal=true;

     while(t--){
        int x; cin>>x;
        p.push_back(x);

        if(x==25) tf++;
        else if(x==50){
            if(tf>0){
                tf--;f++;
            }
            else bal=false;
        }
        else if(x==100){
            if(f>0 && tf>0){
                f--;tf--;
            }
            else if(tf>=3){
                tf-=3;
            }
            else bal=false;
        }
     }
     if(!bal) cout<<"NO\n";
     else cout<<"YES\n";
    //cout<<tf;


}

