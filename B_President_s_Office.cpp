#include <bits/stdc++.h>
using namespace std;

void vogoban_vorsha(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

void solve(){
    int n,m;
    char c;
    cin>>n>>m>>c;

    vector<string>arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];

    vector<char>v;

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j]==c){
                if(i+1<n && arr[i+1][j]!=c && arr[i+1][j]!='.') v.push_back(arr[i+1][j]);
                if(i-1>=0 && arr[i-1][j]!=c && arr[i-1][j]!='.') v.push_back(arr[i-1][j]);
                if(j+1<m && arr[i][j+1]!=c && arr[i][j+1]!='.') v.push_back(arr[i][j+1]);
                if(j-1>=0 && arr[i][j-1]!=c && arr[i][j-1]!='.') v.push_back(arr[i][j-1]);
            }
        }
    }

    sort(v.begin(),v.end());
    v.erase(unique(v.begin(),v.end()),v.end());
    cout<<v.size()<<'\n';
}

int main(){
    vogoban_vorsha();
    solve();
}
