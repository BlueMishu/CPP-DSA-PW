// making row and column 0 if the no is o
#include<iostream>
using namespace std;
int main(){
    int arr[3][3]={1,1,1,1,0,1,1,1,1};
    int m=3;
    int n=3;
    int a,b;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(arr[i][j]==0){
                a=i;
                b=j;
            }

        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(i==a || b==j) arr[i][j]=0;
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }


}