//Factorial function using recursion     
#include<iostream>
using namespace std;
int factorial(int n){
    if(n==1 || n==0) return 1; // base value
    int ans= n*factorial(n-1);// recursive value
    return ans;
    
}
int main(){
    int n;
    cin>>n;
    cout<<factorial(n);
}                                    