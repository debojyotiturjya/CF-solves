#include <bits/stdc++.h>
using namespace std;

void vogoban_vorsha(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}


void solve(long long a, long long b){
    if(a ==0||b==0){
        cout<<max(a,b)<<" "<<0<<'\n';
        return;
    }


    long long hg0=max(a,b)-min(a,b);
    long long mm0=min(a,b);

    long long x=max(a,b)% min(a,b);
    long long y =min(a,b)-x;
    long long mm = min(x,y);

    long long mnv = min(mm,mm0);
    long long gcdu = __gcd(a+mnv,b+mnv);
    long long gcdd = __gcd(a-mnv,b-mnv);
    long long gans = max({gcdd,gcdu,hg0});

    cout << gans << ' ';


    long long md=abs(a-b);
    long long mve=min(a%md,md-(a%md));
    cout <<mve<<'\n';
}

int main(){
    vogoban_vorsha();
    int t;cin>>t;
    while(t--){
        long long a,b;
        cin>>a>>b;

        if(a == b)cout<<0<<' '<<0<<'\n';
        else solve(a,b);
    }
}

