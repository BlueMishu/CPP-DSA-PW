// print 1 to n using extra parameter
#include<iostream>
using namespace std;
void print(int i,int n){
    if(n+1==i) return ;
    cout<<i<<endl;
    print(i+1,n);
}
int main(){
    int n;
    cin>>n;
    print(1,n); // using extra paremeter
}