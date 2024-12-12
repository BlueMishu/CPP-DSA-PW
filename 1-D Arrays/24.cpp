#include<iostream>
#include<vector>
#include<algorithm>
#include <iterator>
using namespace std;
int main(){
    int N=3;
    int leaves=11;
    int frogs[]={3,8,9};
    int count=leaves;
    vector<int> v;
        for(int i=0;i<N;i++){
            for(int j=1;j<=leaves;j++){
                if(j%frogs[i]==0){
                    v.push_back(j);
                }
            }
        }
        sort(v.begin(),v.end());
        v.erase(unique(v.begin(),v.end()),v.end());
        // for(int i=0;i<v.size();i++){
        //     cout<<v[i];
        // }
        cout<<leaves-v.size();
        
}