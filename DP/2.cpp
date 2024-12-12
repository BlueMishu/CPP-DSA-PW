#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y,k;
        cin>>x>>y>>k;
        int a=x%k;
        int b=y%k;
        int countx=x/k;
        int county=y/k;
        //cout<<11%3;
        int count=max(countx,county);
        count*=2;
        if(a!=0 || b!=0) count+=2;
        //cout<<b<<endl;
        // if(a!=0) count++;
        // else if(b!=0) count+=2;
        //else if(a!=0 && b==0) count--;
        //cout<<count<<endl;




        // int a=x;
        // int b=y;
        // int count=0;
        // while(x>0 || y>0){
        //     x-=k;
        //     count++;
            
        //         y-=k;
        //         count++;
            
            
        // }
        if(x>y && abs(x-y)>=k) count--; 

        cout<<count<<endl;
    }
}