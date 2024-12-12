#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	for(int i=1;i<=t;i++){
	    int n;
	    cin>>n;
	    int arr[n];
	    bool flag=true;
	   // for(int j=0;j<n;j++){
	   //     int c=(arr[j+1]-arr[j]);
	   //     int d=(arr[j+2]-arr[j+1]);
	   //     if(c==d) flag=false;
	   //     else flag=true;
	   // }
	   // if(flag==false) cout<<"No";
	   // else cout<<"Yes";
       for(int j=0;j<n;j++){
        cin>>arr[j];
       }
	   if((arr[1]-arr[0])==(arr[2]-arr[1])) cout<<"No"<<endl;
	   else cout<<"Yes"<<endl;
	}
	return 0;
}
