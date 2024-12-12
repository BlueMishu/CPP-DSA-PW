// NO. OF DIGITS AND SQUARE
#include<iostream>
using namespace std;
int square(int n){
    return n*n;
}
int NoOfDigits(int n){
    int a=0;
    while(n>0){
        n/=10;
        a++;
    }
    return a;
}
int main(){
    int a=0,n;
    cin>>n;
    int number = NoOfDigits(n);
    cout<<square(number);
    
}