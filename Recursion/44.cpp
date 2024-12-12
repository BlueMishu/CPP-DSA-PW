#include <iostream>
#include<vector>
using namespace std;
vector<vector<int> > subset(int arr[],int n,int idx,vector<int> v){
    vector<vector<int> > sub;
    
    if(idx==n){
        sub.push_back(v);
        return sub;
    }
    
    subset(arr,n,idx+1,v);
    v.push_back(arr[idx]);
    subset(arr,n,idx+1,v);
    
}
int main() {
	// your code goes here
    int t;
    cin>>t;
    vector<vector<int> > subs;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        int arr[n];
        for(int j=0;j<n;j++){
            cin>>arr[j];
        }
        
        vector<int>v;
        subs=subset(arr,n,0,v);
    }
    for(int i=0;i<subs.size();i++){
        for(int j=0;j<subs[i].size();j++){
            cout<<subs[i][j]<<" ";

        }
        cout<<endl;
    }
}
