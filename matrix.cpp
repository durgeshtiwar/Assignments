#include <iostream>
using namespace std;

class Complex
{
private:
  int num1, num2;

public:
  void setData(int num1, int num2)
  {
    int num1 = num1;
    int num2 = num2;
  }
  void showData()
  {
    cout << "Real Number is = " << num1 << endl;
    cout << "Image Number is = " << num2 << endl;
  }
};
int main()
{
  Complex c1, c2;
  c1.setData(3, 5);
  c2.setData(4, 5);
  c1.showData();
  c2.showData();
}