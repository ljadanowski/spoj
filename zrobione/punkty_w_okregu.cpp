#include <iostream>
using namespace std;

int main()
{
  int a, b, r, x, y, n, odleglosc;
  cin >> a >> b >> r;
  cin >> n;
  //(x-a)^2+(y-b)^2=r^2
  while(n--)
  {
    cin >> x >> y;
    odleglosc = (x-a)*(x-a)+(y-b)*(y-b);
    if(odleglosc<r*r) cout << "I" << endl;
    else if(odleglosc==r*r) cout << "E" << endl;
    else if(odleglosc>r*r) cout << "O" << endl;
  }
}
