
#include <bits/stdc++.h>
using namespace std;

map<char,int>mpw={{'Q',9},{'R',5},{'B',3},{'N',3},{'P',1}};
map<char,int>mpb={{'q',9},{'r',5},{'b',3},{'n',3},{'p',1}};

int main(){
    char a[8][8];
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            cin>>a[i][j];
        }
    }
    int w=0,b=0;
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            w+=mpw[a[i][j]];
            b+=mpb[a[i][j]];
        }
    }

    if(w>b) cout<<"White\n";
    else if(b>w) cout<<"Black\n";
    else cout<<"Draw\n";

}

