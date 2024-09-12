#include <iostream>
using namespace std;
int binaryToDecimal(int num)
{
    int result = 0;
    int pow = 1;
    while (num > 0)
    {
        result += (num % 10) * pow;
        num = num / 10;
        pow = pow * 2;
    }

    return result;
}
int main()
{
    int num, result;
    cout << "Enter the value of number";
    cin >> num;
    result = binaryToDecimal(num);
    cout << "Binay form of given no is : " << result;
    return 0;
}