// maximum of array
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of array : ";
    cin >> n;
    cout << "Enter the elements of array : ";
    int arr[n], max;
    max = arr[0];
    for (int i = 0; i <= n - 1; i++)
    {
        cin >> arr[i];
        if (arr[i] > max)
            max = arr[i];
    }
    cout << max;
}