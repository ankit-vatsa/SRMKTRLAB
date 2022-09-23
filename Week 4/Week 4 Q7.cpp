#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std;

    class Number
{
    private:
    int n;
    string s;
    public:
    Number()
    {
        cout<<"Please enter a Number:"<<endl;
        cin>>n;
    }
    ~Number()
    {
        s=to_string(n);
        reverse(s.begin(),s.end());
        cout<<"Reversed number is:"<<s;
    }
};

int main()
{
    Number n;
    return 0;
}
