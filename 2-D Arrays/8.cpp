// print transpose
#include<iostream> 
using namespace std;
int main(){
    int m;
    cout<<"Enter the rows of array : ";
    cin>>m;
    int n;
    cout<<"Enter the column of array : ";
    cin>>n;
    int arr[m][n];
    
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
            
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[j][i]<<" ";
            
            
        }
        cout<<endl;
    }
    cout<<endl;
    int t[m][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            t[i][j]=arr[j][i];
            
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<t[i][j]<<" ";
            
            
        }
        cout<<endl;
    }
}