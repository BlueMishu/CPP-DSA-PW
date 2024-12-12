//Function Calling
#include<iostream>
using namespace std;
void Good(int n){
    if(n==0) return;    
    cout<<"Good Morning"<<endl;
    Good(n-1);
}
int main(){
    int n;
    cin>>n;
    Good(n);
}