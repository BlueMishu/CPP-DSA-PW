// Reverse of array
#include <iostream>
#include <vector>
using namespace std;
void display(vector<int> &v)
{
    for (int i = 0; i <= v.size()-1; i++)
    {
        cout << v[i] << " ";
    }
}
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
    display(v);
    cout<<endl;
    for (int i = 0, j = v.size() - 1; i <= j; i++, j--)
    {
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
    }
    display(v);
}