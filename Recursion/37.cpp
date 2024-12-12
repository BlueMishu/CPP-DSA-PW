// permutation of a string
#include <iostream>
#include <string>
using namespace std;
void permutation(string ans, string original)
{
    if(original==""){
        cout<<ans<<endl;
        return;
    }
    for (int i = 0; i < original.length(); i++)
    {
        char ch = original[i];
        string left = original.substr(0,i);// starting from zero up to i characters
        string right=original.substr(i+1);// substring from (i+1) to end
        permutation(ans+ch,left+right);
    }
}
int main()
{
    string str = "abc";
    permutation("", str);
}