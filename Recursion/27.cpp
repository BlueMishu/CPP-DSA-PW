// print zig zag
#include<iostream>
using namespace std;
void zig(int n){
    if(n==0) return ;
    cout<<n;
    zig(n-1);
    cout<<n;
    zig(n-1);
    cout<<n;
    
}
int main(){
    int n;
    cin>>n;
    zig(n);
}