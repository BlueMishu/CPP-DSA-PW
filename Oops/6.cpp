#include <iostream>
using namespace std;
class student
{
public:
    string name;
    int age;
    bool gender;

    void printinfo()
    {
        cout << "Name is : ";
        cout << name<<endl;
        cout << "Age is : ";
        cout << age<<endl;
        cout << "Gender is : ";
        cout << gender<<endl;
    }
};
int main()
{
    student students[3];

    for (int i = 0; i < 3; i++)
    {
        cout << "Name is : ";
        cin >> students[i].name;
        cout << "Age is : ";
        cin >> students[i].age;
        cout << "Gender is : ";
        cin >> students[i].gender;
    }

    for (int i = 0; i < 3; i++)
    {
        students[i].printinfo();
    }
}