// minimum no. of subset
#include<iostream>
#include<vector>
using namespace std;
int minP(vector<int>& v){
    int n=v.size();
    int cz=0;
    int cn=0;
    for(int i=0;i<n;i++){
        if(v[i]==0) cz++;
        else if(v[i]<0) cn++;
    }
    sort(v.begin(),v.end());
    if(cn==0 && cz==0){
        return v[0];
    }
    else if(cn==0){
        return 0;
    }
    else if(cn%2==0){
        int mul=1;
        for(int i=0;i<n;i++){
            if(i!=(cn-1) && v[i]!=0){
                mul *= v[i];
            }
        }
        return mul;
    }
    else {
        int mu=1;
        for(int i=0;i<n;i++){
            if(v[i]!=0) mu *= v[i];
        }
        return mu;
    }
}
int main(){
    vector<int> v;
    v.push_back(2);
    v.push_back(3);
    v.push_back(1);
    v.push_back(4);
    v.push_back(2); 
    v.push_back(4);
    cout<<minP(v)<<endl;
}