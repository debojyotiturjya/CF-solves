#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,s=0,d=0;cin>>t; vector<int>cards;

    for (int i=0;i<t;i++){
        int a; cin>>a;
        cards.push_back(a);
    }

    bool turn=true;
    while(true){
        int sz=cards.size();
        if(sz==0) break;
        int i=max(cards[0],cards[sz-1]);
        if(turn) s+=i;
        else d+=i;

        if (cards[0]>cards[sz-1]) cards.erase(cards.begin());
        else cards.pop_back();

        turn= !turn;
    }

    cout<<s<<' '<<d;
}

