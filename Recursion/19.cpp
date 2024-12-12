// print 1 to n sum using return type
#include<iostream>
using namespace std;
int sum1(int n){
    if(n==0) return 0;
    return n+sum1(n-1);
  
}
int main(){
    cout<<sum1(6);
}