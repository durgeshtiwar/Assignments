#include<iostream>
#include<vector>
using namespace std;
void rotate(vector<int>& nums, int k) {
        int size = nums.size();
        vector<int>newVect;
        k = k % size; 
        for(int i = 0; i < size; i++)
        {
            if(k>i)
            {
                newVect.push_back(nums[size + i - k]);
                nums.pop_back();
            }
            else
            {
                newVect.push_back(nums[i - k]);
                nums.pop_back();
            }
        }
        for(int i : newVect)
        {
            nums.push_back(i);
        } 
    } 
int main()
{
    vector <int> vec = {1,2,3,4};
    rotate(vec, 6);
    for(int i : vec)
    {
        cout<<i<<", ";
    }
    return 0;
}