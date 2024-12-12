//string to integer(stoi) and string to long long(stol)
#include<iostream>
#include<string>
using namespace std;
int main(){
 	string s="1234567";
 	int x=stoi(s);
 	cout<<x<<endl;

	string str="1234567890987654";
	long long y=stol(str);
	cout<<y;

}