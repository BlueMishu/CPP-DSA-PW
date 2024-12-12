#include<iostream>
using namespace std;
class cricketer{
    public:
    char name;
    int age;
    int noOfTest;
    int average;
};
int main(){
    cricketer virat;
    virat.name='V';
    virat.age=34;
    virat.noOfTest=100;
    virat.average=60;

    cricketer Dhoni;
    Dhoni.name='D';
    Dhoni.age=34;
    Dhoni.noOfTest=100;
    Dhoni.average=60;
    
    cricketer cricketers[2]={virat,Dhoni};
    for(int i=0;i<2;i++){
        cout<<cricketers[i].name<<endl;
        cout<<cricketers[i].age<<endl;
        cout<<cricketers[i].noOfTest<<endl;
        cout<<cricketers[i].average<<endl;
    }
}