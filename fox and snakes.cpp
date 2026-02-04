#include<bits/stdc++.h>
using namespace std;

int main(){
    int r,c,co=0; cin>>r>>c; bool n=true;

    for(int i=0;i<r;i++){
        if(i%2==0){
            for (int j=0;j<c;j++) cout<<'#';
        }
        else{
            if(n){
                for (int j=0;j<c-1;j++) cout<<'.';
                cout<<'#';
            }
            else{
                cout<<'#';
                for(int j=1;j<c;j++) cout<<'.';
            }
            n=!n;
        }
        cout<<'\n';


        }

    }



