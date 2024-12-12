// Prefix sum
#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 3, 5, 7, 4, 6};
    int ans[6];
    ans[0] = arr[0];
    for (int i = 1; i < 6; i++)
    {
        ans[i] = ans[i - 1] + arr[i];
    }
    for (int i = 0; i < 6; i++)
    {
        cout << ans[i] << " ";
    }
}