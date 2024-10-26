#include <iostream>
#include <vector>
using namespace std;
int main()
{
  vector<int> vect2 = {1, 8, 6, 2, 5, 4, 8, 3, 7};
  int maxContainer = INT32_MIN;
  for (int i = 0; i < vect2.size(); i++)
  {
    for (int j = i + 1; j < vect2.size(); j++)
    {
      int w = j - i;
      int h = min(vect2[i], vect2[j]);
      maxContainer = max(maxContainer, w * h);
    }
  }
  cout << "Maximum container is = " << maxContainer;
  return 0;
}