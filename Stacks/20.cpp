// next greater element
#include<iostream>
#include<stack>
using namespace std;
int main(){
    int arr[]={3,1,2,7,4,6,2,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    int nge[n];
    // sc=O(n), tc = O()
    // stack -> pop , ans , push & reverse travel
    stack<int> st;
    nge[n-1]=-1; // assign -1 to last value of integer as it has no element in its right
    st.push(arr[n-1]); //  also push the last no. to the stack
    for(int i=n-2;i>=0;i--){
        // pop all the smaller elements than arr[i]
        while (st.size()>0 && arr[i]>=st.top()) st.pop();
        // mark the answer in next greater element
        if(st.size()==0) nge[i]=-1;
        else nge[i]=st.top();
        // push the arr[i] for next things
        st.push(arr[i]);
    }
    for(int i=0;i<n;i++){
        cout<<nge[i]<<" ";
    }
    cout<<endl;
}