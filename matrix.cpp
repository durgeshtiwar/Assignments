#include <iostream>
#include <vector>
using namespace std;
int main()
{
  vector<vector<int>> vect1(4, vector<int>(4, 1));
  cout << "Enter the no." << endl;
  for (int i = 0; i < 4; i++)
  {
    for (int j = 0; j < 4; j++)
    {
      cin >> vect1[i][j];
    }
  }
  cout << endl;
  for (int i = 0; i < 4; i++)
  {
    for (int j = 0; j < 4; j++)
    {
      if (i % 2 == 0)
      {
        cout << vect1[j][i] << " ";
      }
      else
      {
        cout << vect1[3 - j][i] << " ";
      }
    }
    cout << endl;
  }

  return 0;
}