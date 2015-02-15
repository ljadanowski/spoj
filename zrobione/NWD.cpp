#include <iostream>
using namespace std;
int main()
{
  int a, b, t;
  cin >> t;
  while(t--)
  {
    cin >> a >> b;
    int c;
    while(b!=0)
    {
      c=a%b;
      a=b;
      b=c;
    }
    cout << a << endl;
  }
}
