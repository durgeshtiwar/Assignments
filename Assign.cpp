// Create a complex class and overload assignment operator for that class.
#include <iostream>
using namespace std;
class Complex
{
    int real, img;

public:
    Complex() { cout << "Default Constructor Called" << endl; }
    Complex(int r, int i)
    {
        cout << "Parameterized Constructor Called" << endl;
        real = r;
        img = i;
    }
    void display()
    {
        cout << real << " + " << img << "i" << endl;
    }
};
int main()
{
    Complex c1(10, 20);
    c1.display();
    Complex c2 = c1;

    c2.display();
    return 0;
}