// alternate no.
#include <iostream>
using namespace std;
int main()
{
    int arr[] = {-5, 2, 5, 2, 4, -8};
    
    int i = 0;
    int j = 1;
    while (i <=4  && j <6)
    {
        if (i % 2 == 0 && arr[i] < 0)
            i += 2;
        if(i%2!=0) i++;
        if(j%2==0) j++;
        if (j % 2 != 0 && arr[j] >= 0)
            j += 2;
        if((i % 2 == 0 && arr[i] > 0) && (j % 2 != 0 && arr[j] <= 0) ){
            swap(arr[i], arr[j]);
            i++;
            j++;
        }
    }
    
    for (int k = 0; k < 6; k++)
    {
        cout << arr[k] << " ";
    }
}