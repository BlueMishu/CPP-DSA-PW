// 2d vector declaration
#include<iostream>
using namespace std;
int main(){
    //vector<int> v(5,2);// v of size 5 with each element 2
    vector< vector<int> > v(3, vector <int> (4,2)); // 3 vectors are created under v with 4 size and each value 2

    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<v.size()<<endl;// rows
    cout<<v[0].size()<<endl;// column

}