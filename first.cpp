#include<iostream>
#include<vector>
using namespace std;
int getPivot(vector<int>& arr) {
    int start = 0, end = arr.size()-1;
    int mid = start + (end - start)/2;
    while (end>start)
    {
        if(arr[mid]>=arr[0])
        {
            start = mid + 1;
        }else{
            end = mid;
        }
        mid = start + (end - start)/2;
    }
    return start;
    
}
int main()
{
    vector<int>num = {3,4,5,8};
    cout<<"------"<<getPivot(num)<<endl;
    return 0;
}