//Square root
#include <iostream>
using namespace std;
int square(int n)
{
    int sqr = n * n;
    return sqr;
}
int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cout << square(i) << " ";
    }
    cout << endl;
}
