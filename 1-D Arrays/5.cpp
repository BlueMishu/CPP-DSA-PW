// Check whether element is present or not/check mark
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
    int a;
    cout << "Enter the element you want to check : ";
    cin >> a;
    bool flag = false;
    for (int i = 0; i <= n - 1; i++)
    {
        if (arr[i] == a)
            flag = true;
    }
    if (flag == true)
        cout << "Element is present";
    else
        cout << "Element is not present";
}