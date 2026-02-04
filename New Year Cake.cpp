#include <bits/stdc++.h>
using namespace std;

void vogoban_vorsha(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

void solve(){
    int a,b; cin>>a>>b;
    int ta=a,tb=b;

    vector<long long> v;
    for(long long i=1;i<=a+b;i*=2){
        v.push_back(i);
    }

    int wf=0;
    a=ta;b=tb;
    for(int i=0;i<v.size();i++){
        if(i%2 == 0){
            if(v[i]<=a){
                a-=v[i];
                wf++;
            } else {
                break;
            }
        }
        else {
            if(v[i]<=b){
                b -= v[i];
                wf++;
            } else {
                break;
            }
        }
    }


    int df=0;
    a =ta;b=tb;
    for(int i=0; i<v.size(); i++){
        if(i%2==0){
            if(v[i]<=b){
                b-=v[i];
                df++;
            }
            else{
                break;
            }
        }
        else{
            if(v[i]<=a){
                a-=v[i];
                df++;
            }
            else{
                break;
            }
        }
    }

    cout <<max(wf, df)<<'\n';
}

int main(){
    vogoban_vorsha();
    int t;cin>>t;
    while(t--){
        solve();
    }

}
