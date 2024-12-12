#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
	string arr[]={"0123","0023","456","00182","940","002901"};
	int max=stoi(arr[0]);
	string maxs=arr[0];
	for(int i=1;i<6;i++){
		int a=stoi(arr[i]);
		if(a>max){
			max=a;
			maxs=arr[i];
		} 
	}
	cout<<max<<endl<<maxs<<endl;
	for(int i=1;i<6;i++){
		int a=stoi(arr[i]);
		if(max==a){
			cout<<i;
		}
	}

}