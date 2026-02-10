#include <bits/stdc++.h>
using namespace std;
void vogoban_vorsha(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
void solve(){
    int x1,y1,x2,y2; cin>>x1>>y1>>x2>>y2;

    if(x1==x2){
        int diffy=abs(y2-y1);
        cout<<x1+diffy<<' '<<y1<<' '<<x2+diffy<<' '<<y2;
    }
    else if(y1==y2){
        int diffx=abs(x2-x1);
        cout<<x1<<' '<<y1+diffx<<' '<<x2<<' '<<y2+diffx;
    }
    else{
        int diffy=abs(y2-y1),diffx=abs(x2-x1);
        if(diffy!=diffx) cout<<-1;
        else cout<<x1<<' '<<y2<<' '<<x2<<' '<<y1;
    }
    
}
int main(){
    vogoban_vorsha();
    solve();
}
