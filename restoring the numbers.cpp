#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c,ab,bc,ac,abc; cin>>ab>>bc>>ac>>abc; vector<int>num;

    num.push_back(ab);num.push_back(bc);num.push_back(ac);num.push_back(abc);
    sort(num.begin(),num.end());


    c=num[3]-num[0]; cout<<c<<' ';
    a=num[1]-c; cout<<a<<' ';
    b=num[3]-a-c; cout<<b;

}

