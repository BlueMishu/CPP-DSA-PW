// maze path
#include<iostream>
using namespace std;
int maze(int sr , int sc ,int er ,int ec){
    if(sr>er || sc>ec) return 0;
    if(sr==er && sc==ec) return 1;
    int right = maze(sr,sc+1,er,ec);
    int down = maze(sr+1,sc,er,ec);
    return right+down;
}
int maze2(int sr , int sc){
    if(sr<1 || sc<1) return 0;
    if(sr==1 && sc==1) return 1;
    int right = maze2(sr,sc-1);
    int down = maze2(sr-1,sc);
    return right+down;
}
void print(int sr , int sc ,int er ,int ec,string s){
    if(sr>er || sc>ec) return ;
    if(sr==er && sc==ec){
        cout<<s<<endl;
        return;
    }
    print(sr,sc+1,er,ec,s+'R');
    print(sr+1,sc,er,ec,s+'D');
    
}
int main(){
    cout<<maze(1,1,4,4)<<endl;
    print(1,1,4,4,"");
    cout<<maze2(3,4)<<endl;
}