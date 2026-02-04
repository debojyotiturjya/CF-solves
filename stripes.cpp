#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        char arr[8][8];
        for(int i=0;i<8;i++){
            for(int j=0;j<8;j++){
                cin>>arr[i][j];
            }
        }
        int r=0,b=0,rc=0,bc=0;
        bool ck=false;
        for(int i=0;i<8;i++){
            for(int j=0;j<8;j++){
                if(arr[j][i]=='B') b++;
            }
            if(b==8) ck=true;
            b=0;
        }
        if(ck) cout<<'B'<<'\n';
        else cout<<'R'<<'\n';

    }

}
