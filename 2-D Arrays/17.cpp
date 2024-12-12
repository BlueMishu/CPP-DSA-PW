// print elements of both diagonals
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
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(i==j || (i+j)==(n-1)){
                cout<<a[i][j];
            }
            else cout<<" ";
        }
        cout<<endl;
    }
}