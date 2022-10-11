// 7. Write a C++ class Program to perform Complex Arithmetic using operator overloading
#include <iostream>
using namespace std;

class Complex {
   private:
    float real;
    float imag;

   public:
   
    Complex()
    {
        real= 0; 
        imag= 0;
    }

    void getinput() {
      
        cout << "Enter real part : ";
        cin >> real;
      
        cout << "Enter imaginary part : ";
        cin >> imag;
    }

    Complex operator + (const Complex& obj) {
        Complex temp;
        temp.real = real + obj.real;
        temp.imag = imag + obj.imag;
        return temp;
    }

    void output() {
        if (imag < 0)
            cout << "Output Complex number: " << real << imag << "i";
        else
            cout << "Output Complex number: " << real << "+" << imag << "i";
    }
};

int main() {
    Complex complex1, complex2, result;

    cout << "Enter first complex number:\n";
    complex1.getinput();

    cout << "Enter second complex number:\n";
    complex2.getinput();

    result = complex1 + complex2;
    result.output();

    return 0;
}
