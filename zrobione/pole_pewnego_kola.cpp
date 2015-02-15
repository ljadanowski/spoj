#include <iostream>
#include <cmath>
#include <iomanip>  
using namespace std;

int main()
{
  double d, r;
  long double PI = 3.141592654;
  cin>>r>>d;
  long double wynik = PI*(r*r-0.25*d*d);
  cout << std::fixed;
  cout << setprecision(2) << wynik << endl;
}
