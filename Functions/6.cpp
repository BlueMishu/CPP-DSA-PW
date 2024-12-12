// Odd numbers between
#include<iostream>
using namespace std;
int numbers(int a,int b){
    int n;
    for(int i=a;i<=b;i++){
        if(i%2!=0)
        cout<<i<<" ";
    }
    //cout<<endl;
    
}
int main(){
    int a,b;
    cin>>a>>b;
    numbers(a,b);
}