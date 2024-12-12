// tower of hanoi
#include<iostream>
using namespace std;
void hanoi(int n, char a,char b, char c){// a-> source , b-> helper , c-> destination
    if(n==0) return;
    hanoi(n-1,a,c,b);// here we have reduced this problem by 1 ring for example if we have 3 ring then in this step we will have two ring to be put in order in the helper rod of 3 disc . do for that we eill us destination rod of 3 disc as a helper rod of 2 disc
    cout<<a<<"->"<<c<<endl;// here we will take the last remaining disc from the first rod to the last rod
    hanoi(n-1,b,a,c);// here the 2 disc which are set in b (helper of 3 disc) will become as a source and with the help of a (source of 3 disc) it will put the 2 disc in the 3rd rod where the biggest rod is already present
        
}                                                                                                   
int main(){
    int n=3;
    hanoi(n,'A','B','C');
}