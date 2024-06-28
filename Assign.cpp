#include <iostream>
using namespace std;
class Complex
{
    int real;
    int img;

public:
    Complex() {}
    Complex(int r, int i)
    {
        real = r;
        img = i;
    }
    int getReal()
    {
        return real;
    }
    int getImg()
    {
        return img;
    }
    Complex operator+(Complex c)
    {
        Complex temp;
        temp.real = real + c.real;
        temp.img = img + c.img;
        return temp;
    }
};
int main()
{
    Complex c1(10, 20), c2(30, 40), c3;
    c3 = c1 + c2;
    cout << "Real No. of Complex No. is = " << c3.getReal() << endl;
    cout << "Real No. of Complex No. is = " << c3.getImg();
    return 0;
}