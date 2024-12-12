//Pascal Triangle and combinations and permutations
#include<iostream>
using namespace std;
int fact(int x){
    int mul=1;
    for(int i=1;i<=x;i++){
        mul*=i;
    }
    return mul;
}
int combination(int n,int r){
    int nr;
    int nfact = fact(n);
    int rfact= fact(r);
    int nrfact =fact(n-r);
    int ncr=nfact/(rfact*nrfact);
    return ncr;
}
int permutation(int n,int r){
    int nfact = fact(n);
    int rfact= fact(r);
    int nrfact =fact(n-r);
    int npr=nfact/nrfact;
    return npr;
}
int main(){
    int n,x,r,per,com;
    cout<<"Enter the value of n : ";
    cin>>x;
    //cout<<"Enter the value of r : ";
    //cin>>r;
    for(int i=1;i<=x;i++){
        for(int j=1;j<=i;j++){
            cout<<combination(i,j)<<" ";
        }
        cout<<endl;
    }
}
