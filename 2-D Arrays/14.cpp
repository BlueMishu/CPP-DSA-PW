// wave another form

#include<iostream>
using namespace std;
int main(){
    int n,m;
    cin>>m>>n;
    int a[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    for(int i=m-1;i>=0;i--){
        
        if(i%2==0){
            for(int j=0;j<m;j++){
                cout<<a[i][j]<<" ";
            }
        }
        else {
            for(int j=n-1;j>=0;j--){
                cout<<a[i][j]<<" ";
            }
        }
    }
}