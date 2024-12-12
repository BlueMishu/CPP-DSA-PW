// Multiply two digit
#include<iostream>
using namespace std;
int main(){
    int a,b,mul;
    cin>>a>>b;
    int* p1=&a;
    int* p2=&b;
    int* mulP=&mul;
    *mulP = (*p1)*(*p2);
    cout<<*mulP;
}