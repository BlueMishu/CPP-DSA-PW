// minimum cost to cut a matrices in m*n pieces
#include<iostream>
#include<vector>
#define ll long long int
using namespace std;
bool cmp(int x,int y){ // sorting in decreasing order
    return x>y;
}
ll mincost(int n,int m,vector<ll>& ver ,vector<ll>& hor){
    sort(ver.begin(),ver.end(),cmp);
    sort(hor.begin(),hor.end(),cmp);
    int vr=1;
    int hz=1;
    int h=0;
    int v=0;
    ll cost=0;
    while(h<hor.size() && v<ver.size()){
        if(ver[v]>hor[h]){
            cost+=(ver[v]*vr);
            hz++;
            v++;
        }
        else {
            cost+=(hor[h]*hz);
            vr++;
            h++;
        }
    }
    while(h<hor.size()){
        cost+=(hor[h]*hz);
        vr++;
        h++;
    }
    while(v<ver.size()){
        cost+=(ver[v]*vr);
        hz++;
        v++;
    }
    return cost;
}
int main(){
    int m,n;
    cin>>m>>n;
    vector<ll> vertical,horizontal;
    for(int i=0;i<m-1;i++){
        int x;
        cin>>x;
        vertical.push_back(x);
    }
    for(int i=0;i<n-1;i++){
        int x;
        cin>>x;
        horizontal.push_back(x);
    }
    cout<<mincost(n,m,horizontal,vertical);

}