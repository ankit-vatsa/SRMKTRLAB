#include <iostream>
using namespace std;

class std_basic_info {
private:
    char name[30];
    int age;
    char gender;

public:
    void getBasicInfo(void);
    void putBasicInfo(void);
};

void std_basic_info::getBasicInfo(void)
{ 
    cout << "Enter student's basic information:" << endl;
    cout << "Name: ";
    cin >> name;
    cout << "Age: ";
    cin >> age;
    cout << "Gender: ";
    cin >> gender;
}

void std_basic_info::putBasicInfo(void)
{
    cout << "Name: " << name << ",Age: " << age << ",Gender: " << gender << endl;
}

class std_result_info : public std_basic_info {
private:
    int totalM;
    float perc;
    char grade;

public:
    void getResultInfo(void);
    void putResultInfo(void);
};

void std_result_info::getResultInfo(void)
{
    cout << "Enter student's result information:" << endl;
    cout << "Total Marks out of 500: ";
    cin >> totalM;
    perc = (float)((totalM * 100) / 500);
    cout << "Grade: ";
    cin >> grade;
}

void std_result_info::putResultInfo(void)
{
    cout << "Total Marks: " << totalM << ",Percentage: " << perc << ",Grade: " << grade << endl;
}

int main()
{
    std_result_info std;

    std.getBasicInfo();
    std.getResultInfo();

    std.putBasicInfo();
    std.putResultInfo();

    return 0;
}
