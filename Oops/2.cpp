#include<iostream>
using namespace std;
class book{
    public:
    int price;
    int NoOfPages;
    char name;

    
    
    int countbooks(int p){
        if(price<p) return 1;
        else return 0;
    }
    bool isbookpresent(char book){
        if(book==name) return true;
        else return false;
    }

};
int main(){
    book mishu;
    mishu.price=1000;
    mishu.name='a'; 
    cout<<mishu.countbooks(200);
    cout<<mishu.isbookpresent('a');
}