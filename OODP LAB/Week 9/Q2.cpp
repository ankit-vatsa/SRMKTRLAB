/* Ram and shiva are working as accountants in bank. They need to know all the arithmetic
operations to verify the accounts. Since they are weak in mathematics, they found
difficulty in doing such arithmetic operations. Help them to check accounts by applying
arithmetic operations including add, subtract, multiply and divide using class template. */
#include <iostream>
using namespace std;

template <class custom>

class add
{
    custom Result;
    
    public:
    
    add(custom n1, custom n2)
    {
        Result = n1 + n2;
        
        cout<<Result<<endl;
    }
};

int main() {
    // Write C++ code here
    std::cout << "Hello world!\n";
    
    add <int> obj1(5,6);
    add <float> obj2(5.5,6.6);

    return 0;
}
