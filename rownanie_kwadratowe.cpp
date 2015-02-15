#include <iostream>
#include <cmath>
using namespace std;
int main()
{
  double a, b, c;
  double delta;
  while(cin>>a)
  {
    cin>>b>>c;
    delta=b*b-4*a*c;
    if(delta>0) cout << "2" << endl;
    else if(delta==0) cout << "1" << endl;
    else if(delta<0) cout << "0" << endl;
  }
}
