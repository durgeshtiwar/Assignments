#include<iostream>
#include<vector>
using namespace std;
void reverseFunction(vector<int>&vec, int size){
    for (int i = 0; i < size; i++)
    {
        if (i <= size-i)
        {
            swap(vec[i],vec[size - i]);
        }
        
    }
    
}
int main()
{
    vector<int> vec = {4,8,7,9,2,52,78,90,100,759};
    for (int i : vec)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    int size = vec.size();
    reverseFunction(vec,size-1);
    for (int i : vec)
    {
        cout<<i<<" ";
    }
    
    return 0;
}