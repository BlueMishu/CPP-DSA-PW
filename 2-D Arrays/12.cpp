// multiplication of matrices
#include<iostream>
using namespace std;
int main(){
    int n, m;
    cout<<"Enter rows of 1st matrix: ";
    cin>>m;
    cout<<"Enter column of 1st matrix: ";
    cin>>n;
    int p, q;
    cout<<"Enter rows of 2nd matrix: ";
    cin>>p;
    cout<<"Enter column of 2nd matrix: ";
    cin>>q;
    if(n==p){
        int a[m][n];
        int b[p][q];
        cout<<"Enter the elements of 1st matrix";
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                cin>>a[i][j];
            }
        }
        cout<<"Enter the elements of 2nd matrix";
        for(int i=0;i<p;i++){
            for(int j=0;j<q;j++){
                cin>>b[i][j];
            }
        }
        // resultant matrix
        int res[m][q];
        for(int i=0;i<m;i++){
            for(int j=0;j<q;j++){
                res[i][j]=0;
                // multiply
                for(int k=0;k<p;k++){
                    res[i][j]+=a[i][k]*b[k][j];
                }
            }
        }
        // print
        for(int i=0;i<m;i++){
            for(int j=0;j<q;j++){
                cout<<res[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    else{
        cout<<"Invalid Matrix";
    }
}