#include <iostream>
using namespace std;
int binaryToDecimal(int num)
{
    if (num < 0)
    {
        num = -1 * num;
        int result = 0;
        int pow = 1;
        while (num > 0)
        {
            result += (num % 2) * pow;
            num = num / 2;
            pow = pow * 10;
        }
        result += pow;
        return result;
    }
    else
    {
        int result = 0;
        int pow = 1;
        while (num > 0)
        {
            result += (num % 2) * pow;
            num = num / 2;
            pow = pow * 10;
        }
        return result;
    }
    
    
}
int main()
{
    int num, result;
    cout << "Enter the value of number";
    cin >> num;
    result = binaryToDecimal(num);
    cout << "Binay form of given no is : " << result<<endl;
    return 0;
}