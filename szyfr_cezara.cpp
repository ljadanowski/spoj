#include <iostream>
#include <string>
using namespace std;

int main()
{
  string  tekst = "";
  int klucz = 3;
  unsigned int i;

  getline(cin, tekst);
  for(i=0; i<tekst.length(); i++) 
  {
    cout <<  ((tekst.at(i) + klucz)) << " ";
    if(tekst.at(i)+klucz > 90 ) cout << (char) (tekst.at(i)- 26) << " ";
    else if(tekst.at(i) < 65) cout << (char) tekst.at(i) << " ";

    cout << (char) ((tekst.at(i) + klucz));
  }
  cout << "\n";
}
