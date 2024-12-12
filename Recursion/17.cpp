// print 1 to n without using extra parameter -> kaam after call
#include<iostream>
using namespace std;
void print(int n){
    if(n==0) return ; // base case
    print(n-1); // call
    cout<<n<<endl; // kaam
}
int main(){
    print(6);
}

// when we want to access the last element first than we will call first then we will do kaam as it will take to last code and then from there it will start printing
// when we want to access the first element than we will first do kaam then we will call as usual