//  sum of 1 to n with use of extra parameter
#include <iostream>
using namespace std;
void summ(int sum,int n){
    if(n==0){
        cout<<sum;
        return;
    }
    summ(sum+n,n-1);
}
int main(){
    int n;
    cin>>n;
    summ(0,n);
}