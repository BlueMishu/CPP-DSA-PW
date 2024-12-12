// print 1 to n sum using parameter
#include<iostream>
using namespace std;
void sum1(int sum,int n){
    
    if(n==0){
        cout<<sum;
        return;
    } 
    sum1(sum+n,n-1);
}
int main(){
    sum1(1,6);
}