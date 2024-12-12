// Use of new
#include <iostream>
using namespace std;
class Student
{
public:
    string name;
    int rno;
    float per;
    Student(string n, int r, float p)
    {
        name = n;
        rno = r;
        per = p;
    }
};
void change(Student *s)
{
    (*s).name = "mishu";
}
int main()
{
    Student* s = new Student("Mishu", 2, 90);
    cout << s->name << endl;
    change(s);
    cout << s->name << endl;
}