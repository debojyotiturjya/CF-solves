#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;

    while(t--){
        string s; cin>>s; set <char>st;
        int z=s.size();

        for(int i=0;i<z;i++){
            st.insert(s[i]);
        }
        int zz=st.size();
        char c=*st.begin(),cc=*prev(st.end()); int p,q;

        for(int i=0;i<z;i++){
            if(s[i]==c) p=i;
        }
        for(int i=0;i<z;i++){
            if(s[i]==cc) q=i;
        }

        if(zz==1) cout<<"NO\n";
        else{
            cout<<"YES\n";
            swap(s[p],s[q]);
            cout<<s<<'\n';

        }
    }
}



