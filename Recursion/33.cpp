// print subset of a string
#include <iostream>
// #include<string>
#include <vector>
using namespace std;
void print(string ans, string original, vector<string> &v)
{
    char ch = original[0];
    if (original == "")
    {
        v.push_back(ans);
        return;
    }
    print(ans + ch, original.substr(1), v);
    print(ans, original.substr(1), v);
}
int main()
{
    string str = "abc";
    vector<string> v;
    print("", str, v);
    for(string ele : v){
        cout<<ele<<endl;
    }
}