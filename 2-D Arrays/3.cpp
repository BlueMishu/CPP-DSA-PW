#include<iostream>
using namespace std;
int main(){
	int x;
	cin>>x;
	int arr[x];
	int noz=0,noo=0;
	for(int i=0;i<x;i++){
		cin>>arr[x];
		if(arr[i]==0){
			noz+=1;
			i++;
		}
		else {
			noo+=1;
			i++;
		}
	}
	if(noz>=noo) cout<<noz-noo;
	else cout<<noo-noz;

}