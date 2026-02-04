#include<bits/stdc++.h>
using namespace std;


int main(){
    int n;cin>>n;
    vector<long long>v;

    for(int i=0;i<n;i++){
        long long x;cin>>x; v.push_back(x);
    }
    int x=v.size();
    int si=-1,ei=-1;

    for(int i=0;i<x-1;i++){ //check korbo koi thaki anomaly shuru oiro
        if(v[i]>v[i+1]){
            si=i; break;
        }
    }
    for(int i=x-1;i>=1;i--){ //check korer koi gia anomaly shesh oiro. reverse e loop cz hi point er bad thaki shob sorted thakbo. so check kora easy j order koi break kore
        if(v[i]<v[i-1]){
            ei=i; break;
        }
    }

    if(si==-1) cout<<"yes\n1 1\n"; //mane kunu anomaly paise na already sorted ase;
    else{
        reverse(v.begin()+si,v.begin()+ei+1); //jen thaki gorbor shuru r jeno gia shesh ituk reverse koridilei shesh

        if(is_sorted(v.begin(),v.end())) cout<<"yes\n"<<si+1<<" "<<ei+1<<'\n';
        else cout<<"no\n";
    }


}




