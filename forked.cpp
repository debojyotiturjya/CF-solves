#include <bits/stdc++.h>
using namespace std;
void vogoban_vorsha(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

int main(){
    vogoban_vorsha();
    int t; cin>>t;
    while(t--){
        int a,b,xk,yk,xq,yq; cin>>a>>b>>xk>>yk>>xq>>yq;
        vector<pair<int,int>>vk,vq;
        if(a==1 &&b==1){
            int kx1=xk+a,ky1=yk+b; vk.push_back({kx1,ky1});
            int kx2=xk+a,ky2=yk-b; vk.push_back({kx2,ky2});
            int kx3=xk-a,ky3=yk+b; vk.push_back({kx3,ky3});
            int kx4=xk-a,ky4=yk-b; vk.push_back({kx4,ky4});

            int qx1=xq+a,qy1=yq+b; vq.push_back({qx1,qy1});
            int qx2=xq+a,qy2=yq-b; vq.push_back({qx2,qy2});
            int qx3=xq-a,qy3=yq+b; vq.push_back({qx3,qy3});
            int qx4=xq-a,qy4=yq-b; vq.push_back({qx4,qy4});

        }
        else{
            int kx1=xk-b,ky1=yk+a; vk.push_back({kx1,ky1});
            int kx2=xk+b,ky2=yk+a; vk.push_back({kx2,ky2});
            int kx3=xk+a,ky3=yk+b; vk.push_back({kx3,ky3});
            int kx4=xk+a,ky4=yk-b; vk.push_back({kx4,ky4});
            int kx5=xk+b,ky5=yk-a; vk.push_back({kx5,ky5});
            int kx6=xk-b,ky6=yk-a; vk.push_back({kx6,ky6});
            int kx7=xk-a,ky7=yk+b; vk.push_back({kx7,ky7});
            int kx8=xk-a,ky8=yk-b; vk.push_back({kx8,ky8});

            int qx1=xq-b,qy1=yq+a; vq.push_back({qx1,qy1});
            int qx2=xq+b,qy2=yq+a; vq.push_back({qx2,qy2});
            int qx3=xq+a,qy3=yq+b; vq.push_back({qx3,qy3});
            int qx4=xq+a,qy4=yq-b; vq.push_back({qx4,qy4});
            int qx5=xq+b,qy5=yq-a; vq.push_back({qx5,qy5});
            int qx6=xq-b,qy6=yq-a; vq.push_back({qx6,qy6});
            int qx7=xq-a,qy7=yq+b; vq.push_back({qx7,qy7});
            int qx8=xq-a,qy8=yq-b; vq.push_back({qx8,qy8});
        }

        set<pair<int,int>>sk,sq;
        for(int i=0;i<vk.size();i++){
            sk.insert({vk[i].first,vk[i].second});
            sq.insert({vq[i].first,vq[i].second});
        }

        int ans=0;
        for(auto it:sk){
            if(sq.count(it)) ans++;
        }
        cout<<ans<<'\n';
    }
}


