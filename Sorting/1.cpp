//bubble sort
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int v[8];
    int n=8;
    for(int i=0;i<n;i++){
        
        cin>>v[i];
        
    }
    //Bubble sort 
    // for(int i=0;i<n-1;i++){
    //     for(int j=0;j<n-1-i;j++){  // i bcz everytime we check 1 digit less
    //         if(v[j+1]<v[j]) swap(v[j+1],v[j]);
    //     }
    // }
    //bubble sort optimised
    
    for(int i=0;i<n-1;i++){
        bool flag=true;
        for(int j=0;j<n-1-i;j++){  // i bcz everytime we check 1 digit less
            if(v[j+1]<v[j]){
                swap(v[j+1],v[j]);
                flag=false;
            }
        }
        if(flag==true) break;
    }
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }

}