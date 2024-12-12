// print elements of array in reverse order
#include<iostream>
using namespace std;
void print1(vector<int> &arr,int ci , int n){
    if(ci==n){
        return;
    }
    return print1(arr,ci+1,n);
    cout<<arr[ci]<<" ";
}
int main(){
   vector<int> arr;
   arr.push_back(1);
   arr.push_back(2);
   arr.push_back(3);
    print1(arr,0,3);
}