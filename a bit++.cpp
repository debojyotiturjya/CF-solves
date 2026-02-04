#include<bits/stdc++.h>

using namespace std ;

int main(){
    int t,sum=0; cin>>t;;
    while (t--){
        string x; cin>>x;

        if(x=="++X" || x=="X++") sum+=1;
        else if(x=="--X" || x=="X--") sum-=1;
    }
    cout<<sum<<'\n';


}
