// implementation of minheap by using array
#include<iostream>
#include<queue>
using namespace std;
class MinHeap{
public:
    int arr[50];
    int idx;
    MinHeap(){
        idx=1;
    }
    int top(){
        return arr[1];
    }
    void push(int x){
        arr[idx]=x;
        int i=idx;
        idx++;
        while(i!=1){
            int parent=i/2;
            if(arr[i]<arr[parent]){
                swap(arr[i],arr[parent]);
                
            } 
            else break;
            i=parent;
        }
    }
    void pop(){
        idx--;
        int i=1;
        arr[i]=arr[idx];
        
        while(true){
            int l=2*i;
            int r=2*i+1;
            if(l>idx-1) break;
            if(r>idx-1){
                if(arr[i]>arr[l]){
                    swap(arr[l],arr[i]);
                    i=l;
                }
                break;
            }
            if(arr[l]<arr[r]){
                if(arr[i]>arr[l]){
                    swap(arr[l],arr[i]);
                    i=l;
                }
                else break;
            
            }
            if(arr[l]>arr[r]){
                if(arr[i]>arr[r]){
                    swap(arr[r],arr[i]);
                    i=r;
                }
                else break;
                
            }
        }
    }
    int size(){
        return (idx-1);
    }
    void display(){
        for(int i=1;i<idx;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};
int main(){
    MinHeap pq;
    pq.push(10);
    pq.push(0);
    pq.push(11);
    cout<<pq.top()<<endl;
    pq.push(12);
    pq.push(30);
    cout<<pq.size()<<endl;
    pq.pop();
    cout<<pq.top()<<endl;
    cout<<pq.size()<<endl;
    pq.display();
}