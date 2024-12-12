//a raise to the powr b in log
#include<iostream>
using namespace std;
int pow(int a,int b){
    if(b==0) return 1;
    if(b==1) return a;
    if(b%2==0) return pow(a,(b/2))*pow(a,(b/2));
    else return (pow(a,((b+1)/2))*pow(a,((b+1)/2)))/a;
}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<pow(a,b);
}