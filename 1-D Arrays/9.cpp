// multiply the digits in array
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of elements in an array : ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements in an array : ";

    for (int i = 0; i <= n - 1; i++)
    {
        cin >> arr[i];
    }
    int mul = 1;
    for (int i = 0; i <= n - 1; i++)
    {
        mul *= arr[i];
    }
    cout << mul;
}