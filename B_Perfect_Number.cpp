#include <bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;
void vogoban_vorsha(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

int sum(int x){
    int s=0;
    while(x>0){
        s+=x%10;
        x/=10;
    }
    return s;
}

void solve(){
    int k; cin>>k;

    int c=0, ans=1;

    while(1){
        if(sum(ans)==10){
            c++;
            if(c==k){
                cout<<ans;
                return;
            }
        }
        ans++;
    }

}
int main(){
    vogoban_vorsha();
    // int t; cin>>t; 
    // while(t--) 
        solve();
}
