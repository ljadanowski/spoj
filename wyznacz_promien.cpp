#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  int x1, y1, x2, y2, x3, y3;
  double wynik, Wa, Wb, W, a, b;
  cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
  W = (x1-x2)*(y1-y3) - (x1-x3)*(y1-y2);
  Wa = 0.5*(x2*x2-x1*x1 + y2*y2-y1*y1)*(y1-y3) - 0.5*(x3*x3-x1*x1 + y3*y3 - y1*y1)*(y1-y2);
  Wb = (x1-x2)*0.5*(x3*x3-x1*x1+y3*y3-y1*y1) - (x1*x3)*0.5*(x2*x2-x1*x1+y2*y2-y1*y1);
  cout << "a = " << Wa/W << ", b = " << Wb/W << endl;
  a = Wa/W; b = Wb/W;
  wynik = sqrt((x1-a)*(x1-a) + (y1-b)*(y1-b));
  cout << wynik << endl;
} 
