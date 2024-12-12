#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int x, y, k;
        cin >> x >> y >> k;
        int result, lcm;
        // if(x==y){
        //     cout<<x+y<<endl;
        // }
        while (result < 0 )
        {

            result = min(x, y);

            if (x % result == 0 && y % result == 0)
            {
                break;
            }
            result--;
        }

        lcm = (x * y) / result;
        // if(k==1) {
        //     if(x>y) y=result;
        //     else x=result;
        // }
        // cout<<x<<endl<<y<<endl;
        // cout<<lcm<<endl<<result<<endl;
        if (x != y)
        {
            for (int j = 0; j < k; j++)
            {
                if (x > y)
                    y = result;
                else
                    x = result;
                if (x > y)
                    y = lcm;
                else
                    y = lcm;
            }
        }

        //    cout<<x<<endl<<y<<endl;
        cout << x + y << endl;
        // cout<<y;
    }
    return 0;
}
