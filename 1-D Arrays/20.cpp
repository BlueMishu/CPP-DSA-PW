//sort negative and positive
#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>& v){
    for(int i =0;i<=v.size()-1;i++){
        cout<<v[i]<<" ";
    }
}
int main(){     
    vector<int> v;
    v.push_back(1);
    v.push_back(-5);
    v.push_back(-7);
    v.push_back(6);
    v.push_back(4);
    v.push_back(-4);
    v.push_back(-9);
    v.push_back(4);
    v.push_back(1);
    v.push_back(-4);
    v.push_back(1);
    display(v);
    cout<<endl;
    for(int i = 0;i<v.size()-1;i++){
        for(int j=v.size()-1;j>i;j--){
            if(v[i]>=0) i++;
            if(v[j]<0) j--;
            else if(v[i]<0 && v[j]>=0){
                int temp=v[i];
                v[i]=v[j];
                v[j]=temp;
            }
        }

    }
    display(v);
}