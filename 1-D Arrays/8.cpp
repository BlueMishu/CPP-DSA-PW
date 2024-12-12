// no. of elements which are bigger
#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int n;
    cout << "Enter the no. of elements : ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements : ";
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    cout << "The no. you want to check : ";
    int a;
    cin >> a;
    int b=0;
    for (int i = 0; i <= n - 1; i++){
        if (arr[i] > a) b++;
    }
    cout << "The no. of elements which is greater is : " << b;
}