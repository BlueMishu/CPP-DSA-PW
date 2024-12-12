// copy one array to another in reverse
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);
    v.push_back(7);
    v.push_back(8);
    vector<int> v2(v.size());
    for (int i = 0; i < v.size(); i++)
    {
        v2[i] = v[v.size() - 1 - i]; // i+j=size-1
    }
    for (int i = 0; i < v.size(); i++)
    {
        cout << v2[i] << " ";
    }
}