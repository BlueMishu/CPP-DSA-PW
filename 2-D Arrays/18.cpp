// rotate matrix by anticlockwise 90 degree
#include<iostream>
using namespace std;
int main(){
    int n, m;
    cout<<"Enter rows of 1st matrix: ";
    cin>>m;
    cout<<"Enter column of 1st matrix: ";
    cin>>n;
    int a[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    // transpose
    for(int i=0;i<m;i++){
        for(int j=i+1;j<n;j++){
            int temp=a[i][j];
            a[i][j]=a[j][i];
            a[j][i]=temp;
        }
    }
    //reverse row
    for(int i=0;i<n;i++){
        int j=0,k=m-1;
        while(j<k){
            int temp=a[j][i];
            a[j][i]=a[k][i];
            a[k][i]=temp;
            j++;
            k--;
        }
    }

    //print
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}