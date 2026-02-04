#include <bits/stdc++.h>
using namespace std;
void vogoban_vorsha(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
void solve(){
    char a[4][4];

    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cin>>a[i][j];
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            int h=0,d=0;

            if(a[i][j]=='#') h++;
            else d++;
            if(a[i+1][j]=='#') h++;
            else d++;
            if(a[i][j+1]=='#') h++;
            else d++;
            if(a[i+1][j+1]=='#') h++;
            else d++;

            if(h>=3 || d>=3){
                cout<<"YES\n"; return;
            }
        }
    }
    cout<<"NO\n"; return;

}
int main(){
    vogoban_vorsha();
    solve();
}

