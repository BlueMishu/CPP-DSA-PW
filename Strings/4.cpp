#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	for(int i=1;i<=t;i++){
	    int n;
	    cin>>n;
	    vector<int> arr;
	    for(int j=0;j<n;j++){
	        int x;
            cin>>x;
            arr.push_back(x);        
	    }
	    sort(arr.begin(),arr.end());
        int count=0;
	    for(int k=0;k<n;k++){
	        if(arr[k]==arr[k+1]){
                k+=1;
            }
            else {
                k++;
                count++;
            }
            
	    }
        cout<<count<<endl;
	}
	return 0;
}
