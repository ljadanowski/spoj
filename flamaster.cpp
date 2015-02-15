#include <iostream>
#include <string>
using namespace std;

int main()
{ 
  unsigned int i, j, ilosc = 0, c;
  cin >> c;
  string tekst;
  while(c--) 
  {
    cin >> tekst;
    for(i=0; i<tekst.length(); i++)
    {
      j=i+1;
      while(j<tekst.length() && tekst.at(i) == tekst.at(j++))
      ilosc++;
      cout << tekst.at(i);
      if(ilosc>2) cout << " " << ilosc;
      ilosc = 0;
    }
    cout << endl;
  }
}
