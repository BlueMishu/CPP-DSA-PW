//selection algorithm
#include<iostream>
#include<climits>
using namespace std;
int main(){
   int arr[]={5,3,2,4,1};
   int n=5;
   for(int ele : arr){// for each loop -> which counts every elements present in it
    cout<<ele<<" ";
   } 
   for(int i=0;i<n-1;i++){
    int min=INT_MAX;
    int mindx=-1;
    for(int j=i;j<n;j++){
        if(arr[j]<min){
            min=arr[j];
            mindx=j;
        }
    }
    swap(arr[i],arr[mindx]);
   }
   for(int ele : arr){
    cout<<ele<<" ";
   } 
}