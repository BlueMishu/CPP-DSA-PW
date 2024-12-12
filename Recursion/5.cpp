// print 1 to n without extra parameter
#include<iostream>
using namespace std;
void print(int n){
    if(n==0) return; // base value
    print(n-1); // recursive value
    cout<<n<<endl; // kaam

}
int main(){
    int n;
    cin>>n;
    print(n);
}