// rotate an array
#include <iostream>
#include <vector>
using namespace std;
void display(vector<int> &v)
{
    for (int i = 0; i <= v.size() - 1; i++)
    {
        cout << v[i] << " ";
    }
}
void reversepart(vector<int> &v, int i, int j)
{
    
    while(i<=j){
        int temp=v[i];
        v[i]=v[j];
        v[j]=temp;
        i++;
        j--;
    }
}


int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);
    v.push_back(7);
    v.push_back(8);
    v.push_back(9);
    v.push_back(0);
    int k;
    cin>>k;
    if(k>v.size()) k=k%v.size();
    display(v);
    cout << endl;
    reversepart(v,0,v.size()-k-1);
    display(v);
    cout<<endl;
    
    reversepart(v,v.size()-k,v.size()-1);
    display(v);
    cout<<endl;
    reversepart(v,0,v.size()-1);
    display(v);
}