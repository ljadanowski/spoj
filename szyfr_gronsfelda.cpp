#include <iostream>
#include <string>
using namespace std;

int main()
{
  string zadanie = "", tekst = "" , klucz_tekst;
  int klucz;
  unsigned int i;

  cin >> zadanie;
  if(zadanie == "SZYFRUJ")
  {
    cin >> klucz;
    cin >> tekst;
    for(i=0; i<tekst.length(); i++) 
    {
      klucz = stoi(to_string(klucz).at(i));
      if(tekst.at(i)+klucz%26 > 90 ) tekst.at(i) -= 26;
      cout << (char) ((tekst.at(i) + klucz%26));

    }
    cout << "\n";
  }
  else if(zadanie == "DESZYFRUJ")
  {
    cin >> klucz;
    cin >> tekst;
  }

}
