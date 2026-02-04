#include<bits/stdc++.h>
using namespace std;


int main(){
    int n;cin>>n;
    vector<long long>v;

    for(int i=0;i<n;i++){
        long long x;cin>>x; v.push_back(x);
    }
    if(is_sorted(v.begin(),v.end())) cout<<"yes\n1 1\n";
    else if(is_sorted(v.rbegin(),v.rend())) cout<<"yes\n1 "<<v.size()<<'\n';
    else if(n==2) cout<<"yes\n1 2\n";
    else{
        vector<int>vr; int si,nigga;
        for(int i=0;i<n-1;i++){
            if(v[i]>=v[i+1]){
                if(vr.empty()) vr.push_back(i+1);
                vr.push_back(i+1+1);
            }
            else if(v[i]<v[i+1] && vr.size()!=0){
                vr.push_back(i+1);si=i+1; break;
            }

        }

        int xz=vr.size();
        //for(int x:vr) cout<<x<<' ';
        int p=vr[0]-1,q=vr[xz-1]-1;
        //sort(v.begin()+(vr[0]-1),v.begin()+xz+1);
        vector<int>cancer;
        for(int i=p;i<=q;i++){
            cancer.push_back(v[i]);
        }
        reverse(cancer.begin(),cancer.end());
        int j=0;
        for(int i=p;i<=q;i++){
            v[i]=cancer[j]; j++;
        }


        //for(int x:v) cout<<x<<" ";
        if(is_sorted(v.begin(),v.end())) cout<<"yes\n"<<vr[0]<<' '<<vr[xz-1]<<'\n';
        else cout<<"no\n";
    }


}

