#include <iostream>
#include <stdio.h>
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
  double a, b, c;
  cin >> a >> b >> c;
  if(a != 0) printf("%0.2lf\n", (c-b)/a);
  //cout << round((c-b)/a) << endl;
  else if(c-b == 0 && a == 0) cout << "NWR" << endl;
  else if(a == 0 && c-b != 0) cout << "BR" << endl;
}
