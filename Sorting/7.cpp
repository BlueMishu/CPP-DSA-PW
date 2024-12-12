#include <iostream>
#include <climits>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	for(int i=1;i<=t;i++){
	    int n;
	    cin>>n;
	    vector<int> v;

	    for(int j=0;j<n;j++){
	        int x;
            cin>>x;

            v.push_back(x);
	    }
        for(int l=0;l<n;l++){
            cout<<v[l]<<" ";
        }
	    int k;
	    cin>>k;
	    int b;
	    b=v[k];
	    sort(v.begin(),v.end());
	    for(int j=0;j<n;j++){
	        if(v[j]==v[k]) cout<<j+1<<endl;
	    }
	}
	return 0;
}
