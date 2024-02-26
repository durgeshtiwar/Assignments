#include<iostream>
using namespace std;
class Solution
{
public:
int adddigit(int num)
{
   
    while (num>9)
    {
        int sum=0;
        while (num != 0) 
        {
        sum = sum + num % 10;
        num = num / 10;
        }
        num = sum;   
    }
    return num;
}
};
int main()
{
    Solution s1;
    int result = s1.adddigit(4563);
    cout << "The result is :"<<result;
    return 0;

}