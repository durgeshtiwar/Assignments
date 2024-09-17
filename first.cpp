#include<iostream>
#include<vector>
using namespace std;
int findSubarray(vector<int> &vec, int size)
{
    int maxSum = 0, currentSum = 0;
    for (int start = 0; start < size; start++)
    {
        currentSum = currentSum + vec[start] ;
        maxSum = max(maxSum, currentSum);
        if (currentSum<0)
        {
            currentSum = 0;
        }
        
    }
    return maxSum;
    
}
int main()
{
    vector<int> vec = {4,1,-7,9,5};
    cout<<"SumArray is = "<< findSubarray(vec, vec.size());
    return 0;
}