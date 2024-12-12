// spiral printing
#include<iostream>
using namespace std;
int main(){
    int m,n;
    cin>>m>>n;
    int a[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    // spiral printing
    int minr=0,maxr=m-1,minc=0,maxc=n-1;
    while(maxr>=minr && maxc>=minc){
        
        // right-> minr constant
        for(int i=minc;i<=maxc;i++){
            cout<<a[minr][i]<<" ";
        }
        minr++;
        if(minr>maxr || minc>maxc) break;

        // down-> maxc constant
        for(int i=minr;i<=maxr;i++){
            cout<<a[i][maxc]<<" ";
        }
        maxc--;
        if(minr>maxr || minc>maxc) break;

        // left -> maxr constant
        for(int i=maxc;i>=minc;i--){
            cout<<a[maxr][i]<<" ";
        }
        maxr--;
        if(minr>maxr || minc>maxc) break;

        // up-> minc -> constant
        for(int i=maxr;i>=minr;i--){
            cout<<a[i][minc]<<" ";
        }
        minc++;
    }

}
