#include <iostream>
#include <string>
using namespace std;
int main()
{
  int t;
  unsigned int i;
  string ciag;
  cin >> t;
  while(t--)
  {
    cin >> ciag;
    for(i=0; i<ciag.length()/2; i++)
      cout << ciag.at(i);
    cout << endl;  
  }
}
