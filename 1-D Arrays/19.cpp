//sort 0 and 1
#include<iostream>
#include<vector>
using namespace std;
void display(vector<int> &v)
{
    for (int i = 0; i <= v.size() - 1; i++)
    {
        cout << v[i] << " ";
    }
}
void swap(int i,int j,vector<int>& v){
    int temp=v[i];
    v[i]=v[j];
    v[j]=temp;
}
int main(){
    vector<int> v;
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    v.push_back(1);
    v.push_back(1);
    display(v);
    cout<<endl;
    int i=0,j=v.size()-1;
    while(i<j){
        if(v[i]==0) i++;
        if(v[j]==1) j--;
        if(i>j) break;
        if(v[i]==1 && v[j]==0){
            v[j]=1;
            v[i]=0;
            i++;
            j--;
        }
    }
    display(v);
}