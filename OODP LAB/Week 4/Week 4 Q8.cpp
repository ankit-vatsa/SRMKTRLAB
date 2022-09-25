#include <iostream>

using namespace std;

class Person
{
private:
    string First_Name;
    string Last_Name;

public:
    Person()
    {
        First_Name = "";
        Last_Name = "";
    }
    Person(string f)
    {
        First_Name = f;
        Last_Name = "";
    }
    Person(string f, string l)
    {
        First_Name = f;
        Last_Name = l;
    }
};

int main()
{
    return 0;
}
