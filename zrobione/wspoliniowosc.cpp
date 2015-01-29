#include <iostream>
using namespace std;

int main()
{
  int t, i;
  double pierwszy[2], drugi[2], trzeci[2];
  double a, b;
  cin >> t;
  while(t--)
  {
    for(i=0; i<2; i++) cin >> pierwszy[i];
    for(i=0; i<2; i++) cin >> drugi[i];
    for(i=0; i<2; i++) cin >> trzeci[i];
    if(pierwszy[0] == drugi [0]) cout << "TAK" << endl;
    else if(pierwszy[1] == drugi[i]) cout << "TAK" << endl;
    else {
      a = (drugi[1]-pierwszy[1])/(drugi[0]-pierwszy[0]);
      b = (pierwszy[0]*drugi[1]-drugi[0]*pierwszy[1])/(pierwszy[0]-drugi[0]);
      if(trzeci[1] == a*trzeci[0]+b) cout << "TAK" << endl;
      else cout << "NIE" << endl;
   }   
  }
}
