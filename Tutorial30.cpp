#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
//------> Creating a prameterized Constructor as it takes two parameters.
    Complex(int, int); // Constructor declaration
    void printNumber()
    {
        cout << "Your Number is " << a << " + " << b << "i" << endl;
    }
};

Complex::Complex(int x, int y)
{
    a = x;
    b = y;
}
int main()
{
    // Implicit call
    Complex a(4,6);
    a.printNumber();

    // Explicit call
    Complex b = Complex(5,7);
    b.printNumber();
    return 0;
}
