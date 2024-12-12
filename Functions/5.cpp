//Area of circle
#include<iostream>
using namespace std;
float area(int r){
    float ar=r*r*3.14;
    return ar;
}
int main(){
    int r;
    cin>>r;
    cout<<area(r);
}