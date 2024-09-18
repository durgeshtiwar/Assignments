#include<iostream>
#include<vector>
using namespace std;
int majorityElement(vector<int> &vec)
{
    int size = vec.size();
    int freq = 0;
    int ans;
    for( int i = 0; i < size; i++)
    {
        if (freq == 0)
        {
            ans = vec[i];
        }
        
        if (ans == vec[i])
        {
            freq++;
        }else
        {
            freq--;
        }
    }
    return ans;
}
int main()
{
    vector<int> vec = {1,1,2,2,1,1,1,2,2,2,2,2,2,2,2,2,4};
    cout <<"Element is = "<< majorityElement(vec)<<endl;
    return 0;
}