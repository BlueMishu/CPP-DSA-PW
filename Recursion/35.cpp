// subset removing duplicate
#include <iostream>
using namespace std;
void print(string ans, string original, vector<string> &v, bool flag)
{
    if (original == "")
    {
        v.push_back(ans);
        return;
    }
    char ch = original[0];
    if (original.length() == 1)
    {
        if (flag == true)
            print(ans + ch, original.substr(1), v, true);
        print(ans, original.substr(1), v, true);
        return; // if only one character is left so we dont want to run other two conditions
    }
    char dh=original[1];
    if(ch==dh){
        if (flag == true)
            print(ans + ch, original.substr(1), v, true);
        print(ans, original.substr(1), v, false);
    }
    else {
        if (flag == true)
            print(ans + ch, original.substr(1), v, true);
        print(ans, original.substr(1), v, true);
    }
}

int main()
{
    string str = "aab";
    vector<string> v;
    print("", str, v, true);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }
}