#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	for(int i=1;i<=t;i++){
	    int x1,x2,y1,y2;
	    cin>>x1,x2,y1,y2;
	    int a,b;
	    a=x1/y1;//Diesel
	    b=x2/y2;//Petrol;
	    if(a>b) cout<<-1<<endl;
	    else if(a==b) cout<<0<<endl;
	    else cout<<1<<endl;
	}
	return 0;
}
