#include <iostream>
#include<limits.h>
#include<algorithm>
using namespace std;


int main() {
	int t;
	cin>>t;
	int arr[3];
	int max=INT_MIN;
	int smax=INT_MIN;
	for(int j=1;j<t;j++){
        for(int i=0;i<3;i++){
	    cin>>arr[i];
	    if(arr[i]>max) max=arr[i];
	    }
    
	    for(int i =0;i<3;i++){
	    if(arr[i]>smax && arr[i]!=max) smax=arr[i];
        cout<<smax<<endl;
	    }
    }
	
	return 0;
}