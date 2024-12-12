//Array is sorted or not
#include <iostream>
using namespace std;
int main(){
    int arr[5]={1,2,3,4,5};
    bool flag=false;
    for(int i=0;i<4;i++){
        if(arr[i]<arr[i+1]) flag=true;
        else flag=false;
    }
    if(flag==true) cout<<"Yes";
    else cout<<"No";
}
