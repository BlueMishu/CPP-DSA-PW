// 2d array in functions
#include<iostream>
using namespace std;
void change(int arr[]){
    arr[0]=0;
}
void change2d(int arr[3][3]){// in 2d array it is necessary to give size in vector we dont have to give size just we have to use address(&)
    arr[0][0]=0;
}
int main(){

    int arr[3]={1,2,3};
    cout<<arr[0]<<endl;
    change(arr);
    cout<<arr[0]<<endl;

    int arr2[3][3]={1,2,3,4,5,6,7,8,9};
    cout<<arr2[0][0]<<endl;
    change2d(arr2);
    cout<<arr2[0][0];

}