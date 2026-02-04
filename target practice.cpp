#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;

    while(t--){
        char arr[10][10];int co=0;

        for(int i=0;i<10;i++){
            for(int j=0;j<10;j++){
                char c; cin>>c;
                if(c=='X') co+=min({i,j,9-i,9-j})+1;
            }
        }
        cout<<co<<'\n';
    }

}
