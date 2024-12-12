// Sum of elements in array
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of array : ";
    cin >> n;
    cout << "Enter the elements of array : ";
    int arr[n];
    for (int i = 0; i <= n - 1; i++)
    {
        cin >> arr[i];
    }
    int sum = 0;
    for (int i = 0; i <= n - 1; i++)
    {
        sum += arr[i];
    }
    cout << sum;
}