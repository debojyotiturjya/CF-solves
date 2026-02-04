#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n,k; cin>>n>>k;

        vector<int>v;
        if(n%2==0){
            if(k%2==0){
                if(k>n) cout<<"NO\n";
                else{
                    cout<<"YES\n";
                    for(int i=0;i<k-1;i++){
                        v.push_back(1);
                    }
                    v.push_back(n+1-k);
                    for(int x:v) cout<<x<<' ';
                    cout<<'\n';
                }
            }
            else{
                if(2*k>n) cout<<"NO\n";
                else{
                    cout<<"YES\n";
                    for(int i=0;i<k-1;i++){
                        v.push_back(2);
                    }
                    long long temp=2*(k-1);
                    v.push_back(n-temp);
                    for(int x:v) cout<<x<<' ';
                    cout<<'\n';
                }
            }
        }
        else{
            if(k%2==0) cout<<"NO\n";
            else{
                if(k>n) cout<<"NO\n";
                else{
                    cout<<"YES\n";
                    for(int i=0;i<k-1;i++){
                        v.push_back(1);
                    }
                    v.push_back(n+1-k);
                    for(int x:v) cout<<x<<' ';
                    cout<<'\n';
                }
            }
        }
    }
}

