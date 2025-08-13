#include <iostream>
using namespace std;
int main()
{
  int n, t;
  while (cin >> n)
  {
    for (int i=1; i<=n; i++)
    {
      cin >> t;
      cout << i <<" ";
    }
    cout <<endl;
  }
}