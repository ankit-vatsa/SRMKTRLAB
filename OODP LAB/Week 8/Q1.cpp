#include <iostream>
using namespace std;

class Person
{
protected:
    string name;
    int age;

public:
    virtual void getdata(){};
    virtual void putdata(){};
};

class Professor : public Person
{
    string publication;
    int cur_id;

public:
    void getdata()
    {
        cout << "Enter name of the professor : " << endl;
        cin >> name;
        cout << "Enter age of the professor : " << endl;
        cin >> age;
        cout << "Enter publication of the professor : " << endl;
        cin >> publication;
        cout << "Enter ID of the professor : " << endl;
        cin >> cur_id;
    }

    void putdata()
    {
        cout << endl
             << "Name of the professor : " << name << endl;
        cout << "Age of the professor : " << age << endl;
        cout << "Publication of the professor : " << publication << endl;
        cout << "ID of the professor : " << cur_id << endl;
    }
};

class Student : public Person
{
    int marks[10], cur_id;

public:
    void getdata()
    {
        cout << "Enter name of the student : " << endl;
        cin >> name;
        cout << "Enter age of the student : " << endl;
        cin >> age;
        cout << "Enter ID of the student : " << endl;
        cin >> cur_id;
        cout << "Enter marks in subject 1 : " << endl;
        cin >> marks[0];
        cout << "Enter marks in subject 2 : " << endl;
        cin >> marks[1];
        cout << "Enter marks in subject 3 : " << endl;
        cin >> marks[2];
        cout << "Enter marks in subject 4 : " << endl;
        cin >> marks[3];
        cout << "Enter marks in subject 5 : " << endl;
        cin >> marks[4];
    }

    void putdata()
    {
        cout << endl
             << "Name of the student : " << name << endl;
        cout << "Age of the student : " << age << endl;
        cout << "ID of the student : " << cur_id << endl;
        cout << "Marks in subject 1 : " << marks[0] << endl;
        cout << "Marks in subject 2 : " << marks[1] << endl;
        cout << "Marks in subject 3 : " << marks[2] << endl;
        cout << "Marks in subject 4 : " << marks[3] << endl;
        cout << "Marks in subject 5 : " << marks[4] << endl;
        cout << "Total marks : " << marks[0] + marks[1] + marks[2] + marks[3] + marks[4]<< endl;
    }
};

int main()
{
    int n, num;
    cout << "Enter the number of objects to be created for Professor and Student class : " << endl;
    cin >> n;
    Person *per[n];

    for (int i = 0; i < n; i++)
    {

        cout << "Enter 1 for Professor Data Entry and 2 for Student : " << endl;
        cin >> num;
        if (num == 1)
        {
            per[i] = new Professor;
        }
        else
        {
            per[i] = new Student;
        }

        per[i]->getdata();
    }

    for (int i = 0; i < n; i++)
    {
        per[i]->putdata();
    }

    return 0;
}
