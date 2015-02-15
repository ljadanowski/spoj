#include <iostream>
#include <string>
using namespace std;
int main()
{
  string wyraz; int i;
  while(cin>>wyraz)
  {
    for(i=wyraz.length()-1; i>=0; i--) 
    cout << wyraz.at(i);
    cout << endl;
  }
}
