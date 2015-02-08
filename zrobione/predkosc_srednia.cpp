#include <iostream>
using namespace std;

int main() 
{
  int n, v1, v2;
  cin >> n;
  while(n--)
  {
    cin >> v1 >> v2;
    cout << 2*v1*v2/(v1+v2) << endl;
  }

}
