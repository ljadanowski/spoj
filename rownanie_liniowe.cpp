#include <iostream>
#include <cassert>
using namespace std;
double round(double x)
{
  if(x<0) x -= 0.005;
  else if(x>0) x += 0.005;
  int pom = (int) 100*x;
  x = pom/100.0;
  return x;
}
int main()
{
  assert(round(1.521) == 1.52);
  assert(round(1.526) == 1.53);
  assert(round(0) == 0);
  assert(round(15.689) == 15.69);
  assert(round(15.6) == 15.6);
  assert(round(-15.689) == -15.69);
  assert(round(-15.621) == -15.62);
  /*double a, b, c;
  cin >> a >> b >> c;
  if(c-b == 0 && a == 0) cout << "NWR" << endl;
  else if(a == 0) cout << "BR" << endl;
  else cout << round((c-b)/a) << endl;*/
}
