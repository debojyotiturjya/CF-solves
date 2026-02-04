#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;

    while(t--){
        char s[3][3]; int a=0,b=0,c=0;
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                cin>>s[i][j];
                if(s[i][j]=='A') a++;
                if(s[i][j]=='B') b++;
                if(s[i][j]=='C') c++;
            }
        }
        if(a==2) cout<<"A\n";
        if(b==2) cout<<"B\n";
        if(c==2) cout<<"C\n";
    }
}

